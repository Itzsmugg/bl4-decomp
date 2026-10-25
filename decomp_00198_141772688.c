// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141772688 FUN_141772688 body=85 status=ok
// SIG undefined FUN_141772688(void)

void FUN_141772688(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = &PTR_FUN_14a29c060;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(DAT_14ca19a68 + 1);
  *(undefined2 *)((longlong)puVar1 + 0x41) = 0;
  return;
}



// FUNCTION 1417726de FUN_1417726de body=57 status=ok
// SIG undefined FUN_1417726de(void)

undefined8 * FUN_1417726de(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar1 = &PTR_FUN_14a29f6e0;
    puVar1[1] = param_1;
  }
  return puVar1;
}



// FUNCTION 141772717 FUN_141772717 body=187 status=ok
// SIG undefined FUN_141772717(void)

bool FUN_141772717(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1a460) {
    FUN_144b3d300(&DAT_14ca1a460);
    if (DAT_14ca1a460 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Nanite.MultipleSceneViewsInOnePass",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14ca1a458 = 0;
      }
      else {
        DAT_14ca1a458 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14ca1a460);
    }
  }
  if ((DAT_14ca1a458 != 0 & *(byte *)(param_1 + 0x23f4)) == 1) {
    bVar1 = 0 < *(int *)(DAT_14ca1a458 + 4);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 1417727d2 FUN_1417727d2 body=336 status=ok
// SIG undefined FUN_1417727d2(void)

undefined8 * FUN_1417727d2(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar5 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x40);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar5 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  *puVar5 = &PTR_FUN_14a2a0e78;
  *(int *)(puVar5 + 1) = param_2;
  *(int *)((longlong)puVar5 + 0xc) = param_2 * param_3;
  *(int *)(puVar5 + 2) = param_3;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar5;
  if (puVar5 + 3 != param_4) {
    lVar3 = puVar5[3];
    if (lVar3 != 0) {
      piVar4 = (int *)((lVar3 + -8) - (ulonglong)*(uint *)(lVar3 + -8));
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
          lVar3 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar3 = FUN_145bdc178();
          }
          FUN_140028df4(lVar3,piVar4);
        }
        else {
          FUN_144705e74(piVar4);
        }
      }
    }
    puVar5[3] = *param_4;
    *param_4 = 0;
    *(int *)(puVar5 + 4) = (int)param_4[1];
    *(undefined4 *)((longlong)puVar5 + 0x24) = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
  }
  return puVar5 + 1;
}



// FUNCTION 141772922 FUN_141772922 body=85 status=ok
// SIG undefined FUN_141772922(void)

void FUN_141772922(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = &PTR_FUN_14a29e250;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(DAT_14ca1a4a8 + 1);
  *(undefined2 *)((longlong)puVar1 + 0x41) = 0;
  return;
}



// FUNCTION 141772978 FUN_141772978 body=57 status=ok
// SIG undefined FUN_141772978(void)

undefined8 * FUN_141772978(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar1 = &PTR_FUN_14a29fd10;
    puVar1[1] = param_1;
  }
  return puVar1;
}



// FUNCTION 1417729b2 FUN_1417729b2 body=52 status=ok
// SIG undefined FUN_1417729b2(void)

undefined8 * FUN_1417729b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a29c060;
  FUN_140020148(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417729e6 FUN_1417729e6 body=52 status=ok
// SIG undefined FUN_1417729e6(void)

undefined8 * FUN_1417729e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a29e250;
  FUN_140020148(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772a1a FUN_141772a1a body=29 status=ok
// SIG undefined FUN_141772a1a(void)

undefined8 FUN_141772a1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772a38 FUN_141772a38 body=29 status=ok
// SIG undefined FUN_141772a38(void)

undefined8 FUN_141772a38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772a56 FUN_141772a56 body=308 status=ok
// SIG undefined FUN_141772a56(void)

longlong * FUN_141772a56(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 141772b8a FUN_141772b8a body=29 status=ok
// SIG undefined FUN_141772b8a(void)

undefined8 FUN_141772b8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772ba8 FUN_141772ba8 body=308 status=ok
// SIG undefined FUN_141772ba8(void)

longlong * FUN_141772ba8(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 141772cdc FUN_141772cdc body=201 status=ok
// SIG undefined FUN_141772cdc(void)

undefined8 * FUN_141772cdc(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772da6 FUN_141772da6 body=63 status=ok
// SIG undefined FUN_141772da6(void)

longlong FUN_141772da6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772de6 FUN_141772de6 body=63 status=ok
// SIG undefined FUN_141772de6(void)

longlong FUN_141772de6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772e26 FUN_141772e26 body=353 status=ok
// SIG undefined FUN_141772e26(void)

void FUN_141772e26(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141772ead;
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
LAB_141772ead:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 141772f88 FUN_141772f88 body=75 status=ok
// SIG undefined FUN_141772f88(void)

void FUN_141772f88(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0xffffffffffffc00U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_141269a08();
      return;
    }
  }
  return;
}



// FUNCTION 141772fd4 FUN_141772fd4 body=337 status=ok
// SIG undefined FUN_141772fd4(void)

void FUN_141772fd4(longlong param_1,uint param_2)

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
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141773041;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_141773041:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x28)) {
      uVar3 = uVar4 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x28,8);
  }
  return;
}



// FUNCTION 141773126 FUN_141773126 body=201 status=ok
// SIG undefined FUN_141773126(void)

undefined8 * FUN_141773126(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417731f0 FUN_1417731f0 body=141 status=ok
// SIG undefined FUN_1417731f0(void)

void FUN_1417731f0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_1400200e4(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x10);
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



// FUNCTION 14177327e FUN_14177327e body=29 status=ok
// SIG undefined FUN_14177327e(void)

undefined8 FUN_14177327e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177329c FUN_14177329c body=395 status=ok
// SIG undefined FUN_14177329c(void)

void FUN_14177329c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca1b518;
  if (DAT_14ca1b518 != 0) {
    LOCK();
    *(int *)(DAT_14ca1b518 + 8) = *(int *)(DAT_14ca1b518 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca1b4d0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2a0be0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141773428 FUN_141773428 body=40 status=ok
// SIG undefined FUN_141773428(void)

undefined8 FUN_141773428(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141773450 FUN_141773450 body=40 status=ok
// SIG undefined FUN_141773450(void)

undefined8 FUN_141773450(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141773478 FUN_141773478 body=29 status=ok
// SIG undefined FUN_141773478(void)

undefined8 FUN_141773478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141773496 FUN_141773496 body=315 status=ok
// SIG undefined FUN_141773496(void)

void FUN_141773496(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 4;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141773500;
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
LAB_141773500:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,4);
  }
  return;
}



// FUNCTION 1417735d2 FUN_1417735d2 body=373 status=ok
// SIG undefined FUN_1417735d2(void)

void FUN_1417735d2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14177365d;
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
LAB_14177365d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 141773748 FUN_141773748 body=48 status=ok
// SIG undefined FUN_141773748(void)

void FUN_141773748(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 141773778 FUN_141773778 body=201 status=ok
// SIG undefined FUN_141773778(void)

undefined8 * FUN_141773778(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141773842 FUN_141773842 body=315 status=ok
// SIG undefined FUN_141773842(void)

void FUN_141773842(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417738ac;
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
LAB_1417738ac:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14177397e FUN_14177397e body=43 status=ok
// SIG undefined FUN_14177397e(void)

bool FUN_14177397e(undefined2 *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1406ef37d(*param_1);
  if ((cVar1 == '\0') || ((*(byte *)((longlong)param_1 + 0x3f) & 4) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 8) == 3;
  }
  return bVar2;
}



// FUNCTION 1417739aa FUN_1417739aa body=183 status=ok
// SIG undefined FUN_1417739aa(void)

bool FUN_1417739aa(ushort *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  
  lVar3 = DAT_14ca1cdc0;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar7 = 0;
  }
  else if (iVar2 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  cVar1 = *(char *)(lVar3 + uVar7);
  cVar4 = FUN_1406ef37d(*param_1);
  if ((cVar4 != '\0') && ((~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0xc00000) == 0)) {
    cVar4 = FUN_14019108b();
    if (cVar4 == '\0') {
      return false;
    }
    if (cVar1 == '\0') {
      return false;
    }
    if ((*(byte *)((longlong)param_1 + 0x3f) & 4) != 0) {
      return *(int *)(param_1 + 8) == 3;
    }
  }
  return false;
}



// FUNCTION 141773a74 FUN_141773a74 body=115 status=ok
// SIG undefined FUN_141773a74(void)

undefined8 FUN_141773a74(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  cVar2 = FUN_14019108b((ulonglong)uVar1);
  if ((((cVar2 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0)) &&
      (*(int *)(param_1 + 8) == 0)) &&
     (((6 < *(int *)(param_1 + 0xc) - 1U ||
       ((0x5bU >> (*(int *)(param_1 + 0xc) - 1U & 0x1f) & 1) == 0)) &&
      (((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0 ||
       ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) != 0)))))) {
    uVar3 = FUN_1406ef37d();
    return uVar3;
  }
  return 0;
}



// FUNCTION 141773ae8 FUN_141773ae8 body=113 status=ok
// SIG undefined FUN_141773ae8(void)

undefined8 FUN_141773ae8(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  cVar2 = FUN_14019108b((ulonglong)uVar1);
  if ((((cVar2 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0)) &&
      (*(int *)(param_1 + 8) == 0)) &&
     (((*(uint *)(param_1 + 0xc) < 8 && ((0xb6U >> (*(uint *)(param_1 + 0xc) & 0x1f) & 1) != 0)) &&
      (((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0 ||
       ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) != 0)))))) {
    uVar3 = FUN_1406ef37d();
    return uVar3;
  }
  return 0;
}



// FUNCTION 141773b5a FUN_141773b5a body=122 status=ok
// SIG undefined FUN_141773b5a(void)

undefined8 FUN_141773b5a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  cVar3 = FUN_14019108b((ulonglong)uVar1);
  if (((cVar3 != '\0') &&
      (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x24) + 0x28), (uVar2 >> 9 & 1) != 0)) &&
     (*(int *)(param_1 + 8) == 0)) {
    if (*(int *)(param_1 + 0xc) - 1U < 7) {
      if ((uVar2 >> 0xb & 1) == 0) {
        return 0;
      }
      if ((0x5bU >> ((byte)(*(int *)(param_1 + 0xc) - 1U) & 0x1f) & 1) != 0) {
        return 0;
      }
    }
    else if ((uVar2 >> 0xb & 1) == 0) {
      return 0;
    }
    if ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) == 0) {
      uVar4 = FUN_1406ef37d();
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 141773bd4 FUN_141773bd4 body=113 status=ok
// SIG undefined FUN_141773bd4(void)

undefined8 FUN_141773bd4(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  cVar2 = FUN_14019108b((ulonglong)uVar1);
  if ((((cVar2 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0)) &&
      (*(int *)(param_1 + 8) == 0)) &&
     (((*(uint *)(param_1 + 0xc) < 8 && ((0xb6U >> (*(uint *)(param_1 + 0xc) & 0x1f) & 1) != 0)) &&
      (((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0 &&
       ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) == 0)))))) {
    uVar3 = FUN_1406ef37d();
    return uVar3;
  }
  return 0;
}



// FUNCTION 141773c46 FUN_141773c46 body=189 status=ok
// SIG undefined FUN_141773c46(void)

undefined8 FUN_141773c46(ushort *param_1)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  cVar3 = FUN_14019108b((ulonglong)uVar1);
  if (((cVar3 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0)) &&
     (*(int *)(param_1 + 8) == 0)) {
    if (((6 < *(int *)(param_1 + 0xc) - 1U) ||
        ((0x5bU >> (*(int *)(param_1 + 0xc) - 1U & 0x1f) & 1) == 0)) &&
       (((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0 ||
        ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) != 0)))) {
      cVar3 = FUN_14473b0f0();
      lVar2 = DAT_14ca1d298;
      if (cVar3 != '\0') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar5 = 0;
        }
        else {
          bVar4 = FUN_144a61b4f();
          uVar5 = (ulonglong)(bVar4 ^ 1);
        }
        if (*(char *)(lVar2 + uVar5) == '\x01') {
          uVar6 = FUN_1406ef37d(*param_1);
          return uVar6;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141773d04 FUN_141773d04 body=187 status=ok
// SIG undefined FUN_141773d04(void)

undefined8 FUN_141773d04(ushort *param_1)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  cVar3 = FUN_14019108b((ulonglong)uVar1);
  if (((cVar3 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0)) &&
     (*(int *)(param_1 + 8) == 0)) {
    if (((*(uint *)(param_1 + 0xc) < 8) && ((0xb6U >> (*(uint *)(param_1 + 0xc) & 0x1f) & 1) != 0))
       && (((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0 ||
           ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) != 0)))) {
      cVar3 = FUN_14473b0f0();
      lVar2 = DAT_14ca1d298;
      if (cVar3 != '\0') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar5 = 0;
        }
        else {
          bVar4 = FUN_144a61b4f();
          uVar5 = (ulonglong)(bVar4 ^ 1);
        }
        if (*(char *)(lVar2 + uVar5) == '\x01') {
          uVar6 = FUN_1406ef37d(*param_1);
          return uVar6;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141773dc0 FUN_141773dc0 body=196 status=ok
// SIG undefined FUN_141773dc0(void)

undefined8 FUN_141773dc0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  cVar4 = FUN_14019108b((ulonglong)uVar1);
  if (((cVar4 != '\0') &&
      (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x24) + 0x28), (uVar2 >> 9 & 1) != 0)) &&
     (*(int *)(param_1 + 8) == 0)) {
    if (*(int *)(param_1 + 0xc) - 1U < 7) {
      if ((uVar2 >> 0xb & 1) == 0) {
        return 0;
      }
      if ((0x5bU >> ((byte)(*(int *)(param_1 + 0xc) - 1U) & 0x1f) & 1) != 0) {
        return 0;
      }
    }
    else if ((uVar2 >> 0xb & 1) == 0) {
      return 0;
    }
    if (((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) == 0) &&
       (cVar4 = FUN_14473b0f0(), lVar3 = DAT_14ca1d298, cVar4 != '\0')) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar6 = 0;
      }
      else {
        bVar5 = FUN_144a61b4f();
        uVar6 = (ulonglong)(bVar5 ^ 1);
      }
      if (*(char *)(lVar3 + uVar6) == '\x01') {
        uVar7 = FUN_1406ef37d(*param_1);
        return uVar7;
      }
    }
  }
  return 0;
}



// FUNCTION 141773e84 FUN_141773e84 body=187 status=ok
// SIG undefined FUN_141773e84(void)

undefined8 FUN_141773e84(ushort *param_1)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  cVar3 = FUN_14019108b((ulonglong)uVar1);
  if ((((cVar3 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0)) &&
      (*(int *)(param_1 + 8) == 0)) &&
     (((*(uint *)(param_1 + 0xc) < 8 && ((0xb6U >> (*(uint *)(param_1 + 0xc) & 0x1f) & 1) != 0)) &&
      (((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0 &&
       ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x1400000) == 0)))))) {
    cVar3 = FUN_14473b0f0();
    lVar2 = DAT_14ca1d298;
    if (cVar3 != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar5 = 0;
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar5 = (ulonglong)(bVar4 ^ 1);
      }
      if (*(char *)(lVar2 + uVar5) == '\x01') {
        uVar6 = FUN_1406ef37d(*param_1);
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 141773f3f FUN_141773f3f body=732 status=ok
// SIG undefined FUN_141773f3f(void)

ulonglong FUN_141773f3f(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined7 uVar9;
  longlong *plVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca21478) && (FUN_144b3d300(&DAT_14ca21478), DAT_14ca21478 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DepthOfFieldQuality",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14ca21470 = 0;
    }
    else {
      DAT_14ca21470 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14ca21478);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca21488) && (FUN_144b3d300(&DAT_14ca21488), DAT_14ca21488 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.ForceDepthOfFieldDisable",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14ca21480 = 0;
    }
    else {
      DAT_14ca21480 = (**(code **)(*plVar8 + 0x60))(plVar8);
    }
    _Init_thread_footer(&DAT_14ca21488);
  }
  lVar2 = DAT_14ca21470;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar10 = *(uint *)(lVar1 + 0xc60);
  uVar7 = (ulonglong)uVar10;
  if (((uVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar10 == 2)) {
    uVar11 = 0;
  }
  else if (uVar10 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = CONCAT44(extraout_var,DVar6);
    uVar11 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar11 = 1;
  }
  lVar3 = DAT_14ca21480;
  if (*(int *)(lVar2 + uVar11 * 4) < 1) {
    uVar9 = (undefined7)(uVar7 >> 8);
    bVar4 = 1;
  }
  else {
    uVar10 = *(uint *)(lVar1 + 0xc60);
    uVar7 = (ulonglong)uVar10;
    if (((uVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar10 == 2)) {
      uVar11 = 0;
    }
    else if (uVar10 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = CONCAT44(extraout_var_00,DVar6);
      uVar11 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar11 = 1;
    }
    bVar4 = *(byte *)(lVar3 + uVar11);
    uVar9 = (undefined7)(uVar7 >> 8);
  }
  if ((*(byte *)((longlong)&DAT_14ca814c8 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2) *
                0x3c + 1) & 4) != 0) {
    bVar4 = bVar4 | (*(byte *)(*(longlong *)(param_1 + 8) + 0x4d) & 8) == 0;
    uVar7 = CONCAT71(uVar9,bVar4);
    if (bVar4 == 0) {
      if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x60) & 2) != 0) {
        uVar7 = (ulonglong)DAT_14c7608d4;
        uVar10 = *(uint *)(param_1 + 0x2bf4) & 2;
        if (-1 < (int)DAT_14c7608d4) {
          uVar10 = DAT_14c7608d4;
        }
        if (uVar10 != 0) {
          return 0;
        }
      }
      if ((0.0 < *(float *)(param_1 + 0x2980)) &&
         (uVar7 = CONCAT71((int7)(uVar7 >> 8),1), 0.0 < *(float *)(param_1 + 0x2b50))) {
        return uVar7;
      }
      return CONCAT71((int7)(uVar7 >> 8),0.0 < *(float *)(param_1 + 0x2b58));
    }
  }
  return 0;
}



// FUNCTION 14177421c FUN_14177421c body=40 status=ok
// SIG undefined FUN_14177421c(void)

undefined8 FUN_14177421c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177424a FUN_14177424a body=128 status=ok
// SIG undefined FUN_14177424a(void)

void FUN_14177424a(longlong param_1)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (char)*(int *)(param_1 + 4) + (char)(*(int *)(param_1 + 4) / 9) * -9;
  uVar2 = cVar1 * 0x56;
  cVar3 = (char)((uVar2 & 0xffff) >> 0xf) + (char)(uVar2 >> 8);
  local_18 = (int)(char)(cVar1 + cVar3 * -3);
  local_14 = (int)cVar3;
  FUN_1410c7640();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417742cc FUN_1417742cc body=40 status=ok
// SIG undefined FUN_1417742cc(void)

undefined8 FUN_1417742cc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417742f4 FUN_1417742f4 body=40 status=ok
// SIG undefined FUN_1417742f4(void)

undefined8 FUN_1417742f4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177431c FUN_14177431c body=40 status=ok
// SIG undefined FUN_14177431c(void)

undefined8 FUN_14177431c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141774344 FUN_141774344 body=212 status=ok
// SIG undefined FUN_141774344(void)

undefined8 * FUN_141774344(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar4 = 0xffffffff;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar1 = (&DAT_14c9c0cec)[2 < param_1];
    if (0 < (int)uVar1) {
      puVar5 = (undefined8 *)(&DAT_14cafe438 + (ulonglong)(2 < param_1) * 0x540);
      uVar6 = 0;
      do {
        iVar2 = wcscmp((wchar_t *)*puVar5,L"PostProcessMaterialPSOCollector");
        if (iVar2 == 0) {
          uVar4 = (undefined4)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar1 != uVar6);
    }
  }
  *(undefined4 *)(puVar3 + 1) = uVar4;
  *puVar3 = &PTR_FUN_14a2c2810;
  *(int *)(puVar3 + 2) = param_1;
  return puVar3;
}



// FUNCTION 141774418 FUN_141774418 body=150 status=ok
// SIG undefined FUN_141774418(void)

undefined8 FUN_141774418(ushort *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 2);
  if ((iVar1 / 0x14 & 0x80000001U) == 1) {
    cVar2 = FUN_140653b22();
    if (cVar2 == '\0') {
      return 0;
    }
    if (*param_1 == 0) {
      return 0;
    }
  }
  if (iVar1 % 2 == (uint)((iVar1 / 2) % 5 != 4)) {
    uVar3 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1417744ae FUN_1417744ae body=105 status=ok
// SIG undefined FUN_1417744ae(void)

undefined8 FUN_1417744ae(ushort *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 1) {
    uVar1 = 0;
  }
  else {
    FUN_140930d82(local_2c,*(undefined4 *)(param_1 + 2));
    uVar1 = FUN_140930cb4(param_1,local_2c);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141774518 FUN_141774518 body=29 status=ok
// SIG undefined FUN_141774518(void)

undefined8 FUN_141774518(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141774536 FUN_141774536 body=40 status=ok
// SIG undefined FUN_141774536(void)

undefined8 FUN_141774536(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177455e FUN_14177455e body=40 status=ok
// SIG undefined FUN_14177455e(void)

undefined8 FUN_14177455e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141774586 FUN_141774586 body=40 status=ok
// SIG undefined FUN_141774586(void)

undefined8 FUN_141774586(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417745ae FUN_1417745ae body=40 status=ok
// SIG undefined FUN_1417745ae(void)

undefined8 FUN_1417745ae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417745d6 FUN_1417745d6 body=40 status=ok
// SIG undefined FUN_1417745d6(void)

undefined8 FUN_1417745d6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417745fe FUN_1417745fe body=92 status=ok
// SIG undefined FUN_1417745fe(void)

undefined8 * FUN_1417745fe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2c4b70;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177465a FUN_14177465a body=40 status=ok
// SIG undefined FUN_14177465a(void)

undefined8 FUN_14177465a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141774682 FUN_141774682 body=40 status=ok
// SIG undefined FUN_141774682(void)

undefined8 FUN_141774682(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417746aa FUN_1417746aa body=195 status=ok
// SIG undefined FUN_1417746aa(void)

byte FUN_1417746aa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35558) {
    FUN_144b3d300(&DAT_14ca35558);
    if (DAT_14ca35558 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.BufferVisualizationDumpFrames",1);
      if (plVar1 == (longlong *)0x0) {
        DAT_14ca35550 = 0;
      }
      else {
        DAT_14ca35550 = (**(code **)(*plVar1 + 0x68))(plVar1);
      }
      _Init_thread_footer(&DAT_14ca35558);
    }
  }
  if (DAT_14c867cf1 == '\x01') {
    lVar2 = FUN_14034d933();
    bVar3 = *(byte *)(lVar2 + 0x2a);
  }
  else {
    bVar3 = 0;
  }
  return (*(int *)(DAT_14ca35550 + 4) != 0 | bVar3) & *(byte *)(param_1 + 0x2f70);
}



// FUNCTION 14177476d FUN_14177476d body=282 status=ok
// SIG undefined FUN_14177476d(void)

void FUN_14177476d(void)

{
  int in_stack_00000068;
  char in_stack_00000070;
  
  if (in_stack_00000068 == -1 || in_stack_00000070 != '\x01') {
    FUN_140094833();
  }
  else {
    FUN_142f2cc50();
  }
  return;
}



// FUNCTION 141774888 FUN_141774888 body=255 status=ok
// SIG undefined FUN_141774888(void)

void FUN_141774888(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141774988 FUN_141774988 body=372 status=ok
// SIG undefined FUN_141774988(void)

void FUN_141774988(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x1c8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141774a10;
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
LAB_141774a10:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x1c8)) {
    uVar7 = uVar5 / 0x1c8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c8,8);
  return;
}



// FUNCTION 141774afe FUN_141774afe body=453 status=ok
// SIG undefined FUN_141774afe(void)

void FUN_141774afe(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x88);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 4;
    _Src = *(void **)((longlong)param_1 + 0x80);
joined_r0x000141774c50:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)(int)uVar1;
    if (4 < *(uint *)((longlong)param_1 + 0x8c)) {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 5;
    uVar2 = (uint)uVar4;
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x80);
    }
    else {
      *(uint *)((longlong)param_1 + 0x8c) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x80);
      if (uVar2 < 5) goto joined_r0x000141774c50;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x80,0,uVar4,0x20);
      memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 5);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,uVar4,0x20);
  return;
}



// FUNCTION 141774cc4 FUN_141774cc4 body=570 status=ok
// SIG undefined FUN_141774cc4(void)

void FUN_141774cc4(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x128);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    *(undefined4 *)((longlong)param_1 + 300) = 4;
    _Src = *(void **)((longlong)param_1 + 0x120);
joined_r0x000141774e87:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (4 < *(uint *)((longlong)param_1 + 300)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141774d53;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_141774d53:
    uVar7 = uVar7 / 0x48;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 300) = 0x7fffffff;
      uVar7 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x120);
    }
    else {
      *(uint *)((longlong)param_1 + 300) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x120);
      if (uVar6 < 5) goto joined_r0x000141774e87;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x120,0,uVar7,0x48);
      memmove(*(void **)((longlong)param_1 + 0x120),param_1,(longlong)param_2 * 0x48);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x120,param_2,uVar7,0x48);
  return;
}



// FUNCTION 141774efe FUN_141774efe body=454 status=ok
// SIG undefined FUN_141774efe(void)

void FUN_141774efe(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x108);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 8;
    _Src = *(void **)((longlong)param_1 + 0x100);
joined_r0x00014177503c:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)(int)uVar1;
    if (8 < *(uint *)((longlong)param_1 + 0x10c)) {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 5;
    uVar2 = (uint)uVar4;
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x10c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x100);
    }
    else {
      *(uint *)((longlong)param_1 + 0x10c) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x100);
      if (uVar2 < 9) goto joined_r0x00014177503c;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x100,0,uVar4,0x20);
      memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,uVar4,0x20);
  return;
}



// FUNCTION 1417750c4 FUN_1417750c4 body=89 status=ok
// SIG undefined FUN_1417750c4(void)

void FUN_1417750c4(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar1 + 0x38) + param_2;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(lVar1 + 0x3c) < iVar2) {
    FUN_1400dfd8e(lVar1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  param_2 = param_2 + *(int *)(lVar1 + 0x48);
  if (-1 < param_2) {
    if (*(int *)(lVar1 + 0x4c) < param_2) {
      FUN_1400dfcbe(lVar1 + 0x40,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14177511e FUN_14177511e body=255 status=ok
// SIG undefined FUN_14177511e(void)

void FUN_14177511e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar5;
  int iVar6;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    iVar3 = (int)(uVar5 >> 8);
    iVar6 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar6 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar6;
    FUN_1446f8d3c(param_1,param_2,iVar6,0x100,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14177521e FUN_14177521e body=373 status=ok
// SIG undefined FUN_14177521e(void)

void FUN_14177521e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417752a7;
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
LAB_1417752a7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 141775394 FUN_141775394 body=332 status=ok
// SIG undefined FUN_141775394(void)

void FUN_141775394(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x48;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141775402;
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
LAB_141775402:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x48)) {
      uVar5 = uVar3 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x48,8);
  }
  return;
}



// FUNCTION 1417754e0 FUN_1417754e0 body=597 status=ok
// SIG undefined FUN_1417754e0(void)

void FUN_1417754e0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1417756ec;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1417756ec:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141775736 FUN_141775736 body=72 status=ok
// SIG undefined FUN_141775736(void)

bool FUN_141775736(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = (&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf];
  if ((((~uVar1 & 0xc00000) == 0) && (cVar2 = FUN_14019108b(), cVar2 != '\0')) &&
     ((~uVar1 & 0x10400000) == 0)) {
    return *(int *)(param_1 + 8) == 1;
  }
  return false;
}



// FUNCTION 14177577e FUN_14177577e body=86 status=ok
// SIG undefined FUN_14177577e(void)

bool FUN_14177577e(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  cVar2 = FUN_14019108b((ulonglong)uVar1);
  if ((cVar2 == '\0') || ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x10400000) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 2) != 0) && (*(int *)(param_1 + 8) == 1)
       ) {
      bVar3 = *(int *)(param_1 + 0xc) == 0;
    }
  }
  return bVar3;
}



// FUNCTION 1417757d4 FUN_1417757d4 body=86 status=ok
// SIG undefined FUN_1417757d4(void)

bool FUN_1417757d4(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  cVar2 = FUN_14019108b((ulonglong)uVar1);
  if ((cVar2 == '\0') || ((~(&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf] & 0x10400000) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if (((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 2) != 0) && (*(int *)(param_1 + 8) == 1)
       ) {
      bVar3 = *(int *)(param_1 + 0xc) != 0;
    }
  }
  return bVar3;
}



// FUNCTION 14177582a FUN_14177582a body=212 status=ok
// SIG undefined FUN_14177582a(void)

undefined8 * FUN_14177582a(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar4 = 0xffffffff;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar1 = (&DAT_14c9c0cec)[2 < param_1];
    if (0 < (int)uVar1) {
      puVar5 = (undefined8 *)(&DAT_14cafe438 + (ulonglong)(2 < param_1) * 0x540);
      uVar6 = 0;
      do {
        iVar2 = wcscmp((wchar_t *)*puVar5,L"RayTracingDynamicGeometry");
        if (iVar2 == 0) {
          uVar4 = (undefined4)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar1 != uVar6);
    }
  }
  *(undefined4 *)(puVar3 + 1) = uVar4;
  *puVar3 = &PTR_FUN_14a2db480;
  *(int *)(puVar3 + 2) = param_1;
  return puVar3;
}



// FUNCTION 141775910 FUN_141775910 body=51 status=ok
// SIG undefined FUN_141775910(void)

undefined8 FUN_141775910(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1403fac90(*param_1);
  if ((cVar1 == '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 2) != 0)) {
    uVar2 = FUN_14019108b(*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141775944 FUN_141775944 body=603 status=ok
// SIG undefined FUN_141775944(void)

byte FUN_141775944(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fb48) && (FUN_144b3d300(&DAT_14ca3fb48), DAT_14ca3fb48 == -1)) {
    FUN_140056680(&DAT_14ca3fb30,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fb40 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78308);
    _Init_thread_footer(&DAT_14ca3fb48);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141775adb_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141775adb_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141775999;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141775adb_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141775adb_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141775adb_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141775adb_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141775adb_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141775adb_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141775999:
  if (DAT_14ca3fb40 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fb30;
    if (DAT_14ca3fb38 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fb40 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca3fb40 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if (cVar2 != '\0' || (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) == 0) {
    return 0;
  }
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141775ba0 FUN_141775ba0 body=597 status=ok
// SIG undefined FUN_141775ba0(void)

byte FUN_141775ba0(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fb98) && (FUN_144b3d300(&DAT_14ca3fb98), DAT_14ca3fb98 == -1)) {
    FUN_140056680(&DAT_14ca3fb80,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fb90 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78319);
    _Init_thread_footer(&DAT_14ca3fb98);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141775d31_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141775d31_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141775bf5;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141775d31_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141775d31_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141775d31_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141775d31_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141775d31_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141775d31_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141775bf5:
  if (DAT_14ca3fb90 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fb80;
    if (DAT_14ca3fb88 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fb90 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca3fb90 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if (bVar3 != 0 || (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) == 0) {
    return 0;
  }
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141775df6 FUN_141775df6 body=603 status=ok
// SIG undefined FUN_141775df6(void)

byte FUN_141775df6(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fbe8) && (FUN_144b3d300(&DAT_14ca3fbe8), DAT_14ca3fbe8 == -1)) {
    FUN_140056680(&DAT_14ca3fbd0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fbe0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7832a);
    _Init_thread_footer(&DAT_14ca3fbe8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141775f8d_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141775f8d_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141775e4b;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141775f8d_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141775f8d_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141775f8d_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141775f8d_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141775f8d_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141775f8d_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141775e4b:
  if (DAT_14ca3fbe0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fbd0;
    if (DAT_14ca3fbd8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fbe0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca3fbe0 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if (cVar2 != '\0' || (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) == 0) {
    return 0;
  }
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141776052 FUN_141776052 body=597 status=ok
// SIG undefined FUN_141776052(void)

byte FUN_141776052(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fc38) && (FUN_144b3d300(&DAT_14ca3fc38), DAT_14ca3fc38 == -1)) {
    FUN_140056680(&DAT_14ca3fc20,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fc30 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7833b);
    _Init_thread_footer(&DAT_14ca3fc38);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_1417761e3_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1417761e3_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1417760a7;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1417761e3_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1417761e3_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1417761e3_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1417761e3_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1417761e3_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1417761e3_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_1417760a7:
  if (DAT_14ca3fc30 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fc20;
    if (DAT_14ca3fc28 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fc30 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca3fc30 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if (bVar3 != 0 || (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) == 0) {
    return 0;
  }
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 1417762a8 FUN_1417762a8 body=603 status=ok
// SIG undefined FUN_1417762a8(void)

byte FUN_1417762a8(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fc88) && (FUN_144b3d300(&DAT_14ca3fc88), DAT_14ca3fc88 == -1)) {
    FUN_140056680(&DAT_14ca3fc70,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fc80 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7834c);
    _Init_thread_footer(&DAT_14ca3fc88);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177643f_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177643f_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1417762fd;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177643f_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177643f_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177643f_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177643f_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177643f_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177643f_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_1417762fd:
  if (DAT_14ca3fc80 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fc70;
    if (DAT_14ca3fc78 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fc80 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca3fc80 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if (cVar2 != '\0' || (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) == 0) {
    return 0;
  }
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141776504 FUN_141776504 body=597 status=ok
// SIG undefined FUN_141776504(void)

byte FUN_141776504(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fcd8) && (FUN_144b3d300(&DAT_14ca3fcd8), DAT_14ca3fcd8 == -1)) {
    FUN_140056680(&DAT_14ca3fcc0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fcd0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7835d);
    _Init_thread_footer(&DAT_14ca3fcd8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141776695_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141776695_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141776559;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141776695_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141776695_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141776695_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141776695_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141776695_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141776695_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141776559:
  if (DAT_14ca3fcd0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fcc0;
    if (DAT_14ca3fcc8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fcd0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca3fcd0 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if (bVar3 != 0 || (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) == 0) {
    return 0;
  }
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 14177675a FUN_14177675a body=603 status=ok
// SIG undefined FUN_14177675a(void)

byte FUN_14177675a(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fd28) && (FUN_144b3d300(&DAT_14ca3fd28), DAT_14ca3fd28 == -1)) {
    FUN_140056680(&DAT_14ca3fd10,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fd20 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7836e);
    _Init_thread_footer(&DAT_14ca3fd28);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_1417768f1_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1417768f1_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1417767af;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1417768f1_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1417768f1_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1417768f1_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1417768f1_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1417768f1_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1417768f1_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_1417767af:
  if (DAT_14ca3fd20 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fd10;
    if (DAT_14ca3fd18 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fd20 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca3fd20 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if (cVar2 != '\0' || (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) == 0) {
    return 0;
  }
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 1417769b6 FUN_1417769b6 body=597 status=ok
// SIG undefined FUN_1417769b6(void)

byte FUN_1417769b6(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fd78) && (FUN_144b3d300(&DAT_14ca3fd78), DAT_14ca3fd78 == -1)) {
    FUN_140056680(&DAT_14ca3fd60,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fd70 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7837f);
    _Init_thread_footer(&DAT_14ca3fd78);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141776b47_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141776b47_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141776a0b;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141776b47_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141776b47_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141776b47_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141776b47_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141776b47_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141776b47_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141776a0b:
  if (DAT_14ca3fd70 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fd60;
    if (DAT_14ca3fd68 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fd70 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca3fd70 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if (bVar3 != 0 || (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) == 0) {
    return 0;
  }
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141776c0c FUN_141776c0c body=605 status=ok
// SIG undefined FUN_141776c0c(void)

byte FUN_141776c0c(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fdc8) && (FUN_144b3d300(&DAT_14ca3fdc8), DAT_14ca3fdc8 == -1)) {
    FUN_140056680(&DAT_14ca3fdb0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fdc0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78390);
    _Init_thread_footer(&DAT_14ca3fdc8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141776d8a_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141776d8a_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141776c61;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141776d8a_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141776d8a_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141776d8a_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141776d8a_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141776d8a_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141776d8a_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141776c61:
  if (DAT_14ca3fdc0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fdb0;
    if (DAT_14ca3fdb8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fdc0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca3fdc0 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(1,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141776e6a FUN_141776e6a body=599 status=ok
// SIG undefined FUN_141776e6a(void)

byte FUN_141776e6a(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fe18) && (FUN_144b3d300(&DAT_14ca3fe18), DAT_14ca3fe18 == -1)) {
    FUN_140056680(&DAT_14ca3fe00,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fe10 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f783a1);
    _Init_thread_footer(&DAT_14ca3fe18);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141776fe2_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141776fe2_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141776ebf;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141776fe2_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141776fe2_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141776fe2_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141776fe2_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141776fe2_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141776fe2_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141776ebf:
  if (DAT_14ca3fe10 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fe00;
    if (DAT_14ca3fe08 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fe10 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca3fe10 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(1,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 1417770c2 FUN_1417770c2 body=605 status=ok
// SIG undefined FUN_1417770c2(void)

byte FUN_1417770c2(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fe68) && (FUN_144b3d300(&DAT_14ca3fe68), DAT_14ca3fe68 == -1)) {
    FUN_140056680(&DAT_14ca3fe50,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fe60 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f783b2);
    _Init_thread_footer(&DAT_14ca3fe68);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141777240_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141777240_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141777117;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141777240_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141777240_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141777240_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141777240_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141777240_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141777240_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141777117:
  if (DAT_14ca3fe60 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fe50;
    if (DAT_14ca3fe58 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fe60 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca3fe60 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(1,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141777320 FUN_141777320 body=599 status=ok
// SIG undefined FUN_141777320(void)

byte FUN_141777320(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3feb8) && (FUN_144b3d300(&DAT_14ca3feb8), DAT_14ca3feb8 == -1)) {
    FUN_140056680(&DAT_14ca3fea0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3feb0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f783c3);
    _Init_thread_footer(&DAT_14ca3feb8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141777498_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141777498_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141777375;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141777498_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141777498_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141777498_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141777498_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141777498_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141777498_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141777375:
  if (DAT_14ca3feb0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fea0;
    if (DAT_14ca3fea8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3feb0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca3feb0 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(1,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141777578 FUN_141777578 body=607 status=ok
// SIG undefined FUN_141777578(void)

byte FUN_141777578(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3ff08) && (FUN_144b3d300(&DAT_14ca3ff08), DAT_14ca3ff08 == -1)) {
    FUN_140056680(&DAT_14ca3fef0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3ff00 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f783d4);
    _Init_thread_footer(&DAT_14ca3ff08);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_1417776f7_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1417776f7_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1417775cd;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1417776f7_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1417776f7_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1417776f7_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1417776f7_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1417776f7_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1417776f7_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_1417775cd:
  if (DAT_14ca3ff00 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3fef0;
    if (DAT_14ca3fef8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3ff00 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca3ff00 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(1,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 1417777d8 FUN_1417777d8 body=599 status=ok
// SIG undefined FUN_1417777d8(void)

byte FUN_1417777d8(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3ff58) && (FUN_144b3d300(&DAT_14ca3ff58), DAT_14ca3ff58 == -1)) {
    FUN_140056680(&DAT_14ca3ff40,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3ff50 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f783e5);
    _Init_thread_footer(&DAT_14ca3ff58);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141777950_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141777950_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177782d;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141777950_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141777950_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141777950_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141777950_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141777950_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141777950_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177782d:
  if (DAT_14ca3ff50 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3ff40;
    if (DAT_14ca3ff48 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3ff50 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca3ff50 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(1,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141777a30 FUN_141777a30 body=607 status=ok
// SIG undefined FUN_141777a30(void)

byte FUN_141777a30(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3ffa8) && (FUN_144b3d300(&DAT_14ca3ffa8), DAT_14ca3ffa8 == -1)) {
    FUN_140056680(&DAT_14ca3ff90,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3ffa0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f783f6);
    _Init_thread_footer(&DAT_14ca3ffa8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141777baf_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141777baf_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141777a85;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141777baf_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141777baf_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141777baf_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141777baf_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141777baf_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141777baf_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141777a85:
  if (DAT_14ca3ffa0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3ff90;
    if (DAT_14ca3ff98 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3ffa0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca3ffa0 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(1,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141777c90 FUN_141777c90 body=599 status=ok
// SIG undefined FUN_141777c90(void)

byte FUN_141777c90(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3fff8) && (FUN_144b3d300(&DAT_14ca3fff8), DAT_14ca3fff8 == -1)) {
    FUN_140056680(&DAT_14ca3ffe0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3fff0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78407);
    _Init_thread_footer(&DAT_14ca3fff8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141777e08_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141777e08_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141777ce5;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141777e08_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141777e08_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141777e08_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141777e08_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141777e08_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141777e08_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141777ce5:
  if (DAT_14ca3fff0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca3ffe0;
    if (DAT_14ca3ffe8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca3fff0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca3fff0 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(1,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141777ee8 FUN_141777ee8 body=605 status=ok
// SIG undefined FUN_141777ee8(void)

byte FUN_141777ee8(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40048) && (FUN_144b3d300(&DAT_14ca40048), DAT_14ca40048 == -1)) {
    FUN_140056680(&DAT_14ca40030,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40040 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78418);
    _Init_thread_footer(&DAT_14ca40048);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141778066_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141778066_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141777f3d;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141778066_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141778066_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141778066_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141778066_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141778066_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141778066_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141777f3d:
  if (DAT_14ca40040 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40030;
    if (DAT_14ca40038 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40040 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca40040 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(4,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141778146 FUN_141778146 body=599 status=ok
// SIG undefined FUN_141778146(void)

byte FUN_141778146(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40098) && (FUN_144b3d300(&DAT_14ca40098), DAT_14ca40098 == -1)) {
    FUN_140056680(&DAT_14ca40080,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40090 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78429);
    _Init_thread_footer(&DAT_14ca40098);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_1417782be_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1417782be_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177819b;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1417782be_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1417782be_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1417782be_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1417782be_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1417782be_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1417782be_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177819b:
  if (DAT_14ca40090 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40080;
    if (DAT_14ca40088 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40090 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca40090 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(4,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 14177839e FUN_14177839e body=605 status=ok
// SIG undefined FUN_14177839e(void)

byte FUN_14177839e(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca400e8) && (FUN_144b3d300(&DAT_14ca400e8), DAT_14ca400e8 == -1)) {
    FUN_140056680(&DAT_14ca400d0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca400e0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7843a);
    _Init_thread_footer(&DAT_14ca400e8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177851c_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177851c_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1417783f3;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177851c_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177851c_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177851c_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177851c_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177851c_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177851c_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_1417783f3:
  if (DAT_14ca400e0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca400d0;
    if (DAT_14ca400d8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca400e0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca400e0 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(4,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 1417785fc FUN_1417785fc body=599 status=ok
// SIG undefined FUN_1417785fc(void)

byte FUN_1417785fc(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40138) && (FUN_144b3d300(&DAT_14ca40138), DAT_14ca40138 == -1)) {
    FUN_140056680(&DAT_14ca40120,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40130 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7844b);
    _Init_thread_footer(&DAT_14ca40138);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141778774_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141778774_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141778651;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141778774_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141778774_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141778774_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141778774_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141778774_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141778774_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141778651:
  if (DAT_14ca40130 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40120;
    if (DAT_14ca40128 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40130 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca40130 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(4,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141778854 FUN_141778854 body=607 status=ok
// SIG undefined FUN_141778854(void)

byte FUN_141778854(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40188) && (FUN_144b3d300(&DAT_14ca40188), DAT_14ca40188 == -1)) {
    FUN_140056680(&DAT_14ca40170,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40180 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7845c);
    _Init_thread_footer(&DAT_14ca40188);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_1417789d3_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1417789d3_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1417788a9;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1417789d3_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1417789d3_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1417789d3_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1417789d3_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1417789d3_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1417789d3_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_1417788a9:
  if (DAT_14ca40180 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40170;
    if (DAT_14ca40178 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40180 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca40180 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(4,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141778ab4 FUN_141778ab4 body=599 status=ok
// SIG undefined FUN_141778ab4(void)

byte FUN_141778ab4(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca401d8) && (FUN_144b3d300(&DAT_14ca401d8), DAT_14ca401d8 == -1)) {
    FUN_140056680(&DAT_14ca401c0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca401d0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7846d);
    _Init_thread_footer(&DAT_14ca401d8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141778c2c_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141778c2c_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141778b09;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141778c2c_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141778c2c_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141778c2c_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141778c2c_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141778c2c_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141778c2c_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141778b09:
  if (DAT_14ca401d0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca401c0;
    if (DAT_14ca401c8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca401d0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca401d0 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(4,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141778d0c FUN_141778d0c body=607 status=ok
// SIG undefined FUN_141778d0c(void)

byte FUN_141778d0c(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40228) && (FUN_144b3d300(&DAT_14ca40228), DAT_14ca40228 == -1)) {
    FUN_140056680(&DAT_14ca40210,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40220 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7847e);
    _Init_thread_footer(&DAT_14ca40228);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141778e8b_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141778e8b_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141778d61;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141778e8b_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141778e8b_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141778e8b_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141778e8b_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141778e8b_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141778e8b_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141778d61:
  if (DAT_14ca40220 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40210;
    if (DAT_14ca40218 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40220 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca40220 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(4,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141778f6c FUN_141778f6c body=599 status=ok
// SIG undefined FUN_141778f6c(void)

byte FUN_141778f6c(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40278) && (FUN_144b3d300(&DAT_14ca40278), DAT_14ca40278 == -1)) {
    FUN_140056680(&DAT_14ca40260,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40270 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7848f);
    _Init_thread_footer(&DAT_14ca40278);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_1417790e4_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1417790e4_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141778fc1;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1417790e4_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1417790e4_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1417790e4_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1417790e4_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1417790e4_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1417790e4_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141778fc1:
  if (DAT_14ca40270 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40260;
    if (DAT_14ca40268 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40270 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca40270 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(4,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 1417791c4 FUN_1417791c4 body=605 status=ok
// SIG undefined FUN_1417791c4(void)

byte FUN_1417791c4(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca402c8) && (FUN_144b3d300(&DAT_14ca402c8), DAT_14ca402c8 == -1)) {
    FUN_140056680(&DAT_14ca402b0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca402c0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f784a0);
    _Init_thread_footer(&DAT_14ca402c8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141779342_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141779342_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141779219;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141779342_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141779342_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141779342_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141779342_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141779342_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141779342_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141779219:
  if (DAT_14ca402c0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca402b0;
    if (DAT_14ca402b8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca402c0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca402c0 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(5,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141779422 FUN_141779422 body=599 status=ok
// SIG undefined FUN_141779422(void)

byte FUN_141779422(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40318) && (FUN_144b3d300(&DAT_14ca40318), DAT_14ca40318 == -1)) {
    FUN_140056680(&DAT_14ca40300,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40310 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f784b1);
    _Init_thread_footer(&DAT_14ca40318);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177959a_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177959a_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141779477;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177959a_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177959a_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177959a_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177959a_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177959a_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177959a_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141779477:
  if (DAT_14ca40310 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40300;
    if (DAT_14ca40308 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40310 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca40310 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(5,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 14177967a FUN_14177967a body=605 status=ok
// SIG undefined FUN_14177967a(void)

byte FUN_14177967a(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40368) && (FUN_144b3d300(&DAT_14ca40368), DAT_14ca40368 == -1)) {
    FUN_140056680(&DAT_14ca40350,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40360 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f784c2);
    _Init_thread_footer(&DAT_14ca40368);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_1417797f8_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1417797f8_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1417796cf;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1417797f8_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1417797f8_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1417797f8_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1417797f8_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1417797f8_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1417797f8_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_1417796cf:
  if (DAT_14ca40360 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40350;
    if (DAT_14ca40358 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40360 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca40360 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(5,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 1417798d8 FUN_1417798d8 body=599 status=ok
// SIG undefined FUN_1417798d8(void)

byte FUN_1417798d8(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca403b8) && (FUN_144b3d300(&DAT_14ca403b8), DAT_14ca403b8 == -1)) {
    FUN_140056680(&DAT_14ca403a0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca403b0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f784d3);
    _Init_thread_footer(&DAT_14ca403b8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141779a50_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141779a50_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177992d;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141779a50_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141779a50_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141779a50_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141779a50_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141779a50_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141779a50_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177992d:
  if (DAT_14ca403b0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca403a0;
    if (DAT_14ca403a8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca403b0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca403b0 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(5,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 141779b30 FUN_141779b30 body=607 status=ok
// SIG undefined FUN_141779b30(void)

byte FUN_141779b30(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40408) && (FUN_144b3d300(&DAT_14ca40408), DAT_14ca40408 == -1)) {
    FUN_140056680(&DAT_14ca403f0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40400 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f784e4);
    _Init_thread_footer(&DAT_14ca40408);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141779caf_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141779caf_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141779b85;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141779caf_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141779caf_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141779caf_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141779caf_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141779caf_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141779caf_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141779b85:
  if (DAT_14ca40400 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca403f0;
    if (DAT_14ca403f8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40400 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca40400 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(5,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141779d90 FUN_141779d90 body=599 status=ok
// SIG undefined FUN_141779d90(void)

byte FUN_141779d90(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40458) && (FUN_144b3d300(&DAT_14ca40458), DAT_14ca40458 == -1)) {
    FUN_140056680(&DAT_14ca40440,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40450 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f784f5);
    _Init_thread_footer(&DAT_14ca40458);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_141779f08_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_141779f08_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_141779de5;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_141779f08_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_141779f08_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_141779f08_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_141779f08_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_141779f08_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_141779f08_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_141779de5:
  if (DAT_14ca40450 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40440;
    if (DAT_14ca40448 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40450 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca40450 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(5,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 141779fe8 FUN_141779fe8 body=607 status=ok
// SIG undefined FUN_141779fe8(void)

byte FUN_141779fe8(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca404a8) && (FUN_144b3d300(&DAT_14ca404a8), DAT_14ca404a8 == -1)) {
    FUN_140056680(&DAT_14ca40490,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca404a0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78506);
    _Init_thread_footer(&DAT_14ca404a8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177a167_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177a167_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177a03d;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177a167_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177a167_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177a167_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177a167_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177a167_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177a167_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177a03d:
  if (DAT_14ca404a0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40490;
    if (DAT_14ca40498 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca404a0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca404a0 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(5,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 14177a248 FUN_14177a248 body=599 status=ok
// SIG undefined FUN_14177a248(void)

byte FUN_14177a248(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca404f8) && (FUN_144b3d300(&DAT_14ca404f8), DAT_14ca404f8 == -1)) {
    FUN_140056680(&DAT_14ca404e0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca404f0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78517);
    _Init_thread_footer(&DAT_14ca404f8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177a3c0_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177a3c0_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177a29d;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177a3c0_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177a3c0_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177a3c0_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177a3c0_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177a3c0_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177a3c0_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177a29d:
  if (DAT_14ca404f0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca404e0;
    if (DAT_14ca404e8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca404f0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca404f0 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(5,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 14177a4a0 FUN_14177a4a0 body=605 status=ok
// SIG undefined FUN_14177a4a0(void)

byte FUN_14177a4a0(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40548) && (FUN_144b3d300(&DAT_14ca40548), DAT_14ca40548 == -1)) {
    FUN_140056680(&DAT_14ca40530,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40540 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78528);
    _Init_thread_footer(&DAT_14ca40548);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177a61e_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177a61e_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177a4f5;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177a61e_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177a61e_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177a61e_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177a61e_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177a61e_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177a61e_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177a4f5:
  if (DAT_14ca40540 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40530;
    if (DAT_14ca40538 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40540 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca40540 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(6,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 14177a6fe FUN_14177a6fe body=599 status=ok
// SIG undefined FUN_14177a6fe(void)

byte FUN_14177a6fe(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40598) && (FUN_144b3d300(&DAT_14ca40598), DAT_14ca40598 == -1)) {
    FUN_140056680(&DAT_14ca40580,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40590 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f78539);
    _Init_thread_footer(&DAT_14ca40598);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177a876_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177a876_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177a753;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177a876_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177a876_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177a876_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177a876_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177a876_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177a876_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177a753:
  if (DAT_14ca40590 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40580;
    if (DAT_14ca40588 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40590 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca40590 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(6,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 14177a956 FUN_14177a956 body=605 status=ok
// SIG undefined FUN_14177a956(void)

byte FUN_14177a956(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca405e8) && (FUN_144b3d300(&DAT_14ca405e8), DAT_14ca405e8 == -1)) {
    FUN_140056680(&DAT_14ca405d0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca405e0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7854a);
    _Init_thread_footer(&DAT_14ca405e8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177aad4_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177aad4_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177a9ab;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177aad4_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177aad4_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177aad4_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177aad4_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177aad4_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177aad4_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177a9ab:
  if (DAT_14ca405e0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca405d0;
    if (DAT_14ca405d8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca405e0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca405e0 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(6,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 14177abb4 FUN_14177abb4 body=599 status=ok
// SIG undefined FUN_14177abb4(void)

byte FUN_14177abb4(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40638) && (FUN_144b3d300(&DAT_14ca40638), DAT_14ca40638 == -1)) {
    FUN_140056680(&DAT_14ca40620,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40630 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7855b);
    _Init_thread_footer(&DAT_14ca40638);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177ad2c_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177ad2c_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177ac09;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177ad2c_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177ad2c_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177ad2c_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177ad2c_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177ad2c_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177ad2c_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177ac09:
  if (DAT_14ca40630 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40620;
    if (DAT_14ca40628 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40630 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca40630 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  bVar9 = true;
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) != 0) {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) != 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(6,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 14177ae0c FUN_14177ae0c body=607 status=ok
// SIG undefined FUN_14177ae0c(void)

byte FUN_14177ae0c(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40688) && (FUN_144b3d300(&DAT_14ca40688), DAT_14ca40688 == -1)) {
    FUN_140056680(&DAT_14ca40670,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40680 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7856c);
    _Init_thread_footer(&DAT_14ca40688);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177af8b_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177af8b_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177ae61;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177af8b_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177af8b_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177af8b_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177af8b_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177af8b_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177af8b_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177ae61:
  if (DAT_14ca40680 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40670;
    if (DAT_14ca40678 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40680 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca40680 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(6,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 14177b06c FUN_14177b06c body=599 status=ok
// SIG undefined FUN_14177b06c(void)

byte FUN_14177b06c(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca406d8) && (FUN_144b3d300(&DAT_14ca406d8), DAT_14ca406d8 == -1)) {
    FUN_140056680(&DAT_14ca406c0,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca406d0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7857d);
    _Init_thread_footer(&DAT_14ca406d8);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177b1e4_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177b1e4_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177b0c1;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177b1e4_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177b1e4_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177b1e4_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177b1e4_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177b1e4_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177b1e4_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177b0c1:
  if (DAT_14ca406d0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca406c0;
    if (DAT_14ca406c8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca406d0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca406d0 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(6,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 == 0;
  }
  return 0;
}



// FUNCTION 14177b2c4 FUN_14177b2c4 body=607 status=ok
// SIG undefined FUN_14177b2c4(void)

byte FUN_14177b2c4(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40728) && (FUN_144b3d300(&DAT_14ca40728), DAT_14ca40728 == -1)) {
    FUN_140056680(&DAT_14ca40710,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40720 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7858e);
    _Init_thread_footer(&DAT_14ca40728);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177b443_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177b443_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177b319;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177b443_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177b443_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177b443_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177b443_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177b443_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177b443_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177b319:
  if (DAT_14ca40720 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40710;
    if (DAT_14ca40718 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40720 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) ||
     (iVar4 = (**(code **)(*DAT_14ca40720 + 0xb0))(), iVar4 == 0)) {
    cVar2 = '\0';
  }
  else if ((param_1[0x1c] & 4) == 0) {
    cVar2 = FUN_14012d12b(param_1 + 8);
  }
  else {
    cVar2 = '\x01';
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((cVar2 == '\0' && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(6,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 14177b524 FUN_14177b524 body=599 status=ok
// SIG undefined FUN_14177b524(void)

byte FUN_14177b524(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  cVar2 = FUN_1403fac90(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca40778) && (FUN_144b3d300(&DAT_14ca40778), DAT_14ca40778 == -1)) {
    FUN_140056680(&DAT_14ca40760,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca40770 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f7859f);
    _Init_thread_footer(&DAT_14ca40778);
  }
  uVar1 = *param_1;
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_14177b69c_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_14177b69c_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_14177b579;
      }
      lVar6 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_14177b69c_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_14177b69c_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch(uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_14177b69c_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_14177b69c_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_14177b69c_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_14177b69c_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar5;
LAB_14177b579:
  if (DAT_14ca40770 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar7 = DAT_14ca40760;
    if (DAT_14ca40768 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    DAT_14ca40770 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar7,1);
  }
  cVar2 = FUN_14002b5e0(uVar8,"Windows",7);
  bVar3 = 1;
  if (((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) &&
     (iVar4 = (**(code **)(*DAT_14ca40770 + 0xb0))(), iVar4 != 0)) {
    if ((param_1[0x1c] & 4) == 0) {
      bVar3 = FUN_14012d12b(param_1 + 8);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 0xb & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = (~(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x1400000) == 0;
  }
  if ((bVar3 == 0 && (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 9 & 1) != 0) &&
     (cVar2 = FUN_14027015e(6,param_1), cVar2 != '\0')) {
    bVar3 = FUN_14019108b(*param_1);
    return bVar3 & bVar9 & DAT_14c9c4520 != 0;
  }
  return 0;
}



// FUNCTION 14177b77c FUN_14177b77c body=29 status=ok
// SIG undefined FUN_14177b77c(void)

undefined8 FUN_14177b77c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177b79a FUN_14177b79a body=201 status=ok
// SIG undefined FUN_14177b79a(void)

undefined8 * FUN_14177b79a(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177b86c FUN_14177b86c body=112 status=ok
// SIG undefined FUN_14177b86c(void)

bool FUN_14177b86c(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((((param_1 != 0) && (cVar1 = FUN_144785782(param_2), cVar1 != '\0')) &&
      (*(char *)(param_1 + 0x21) == '\x02' ||
       *(char *)(param_1 + 0x21) == '\x01' && 0 < DAT_14ca40d10)) &&
     (((DAT_14ca84ef5 == '\x01' && (*(int *)(DAT_14c9c2d90 + 4) != 0)) &&
      (*(int *)(DAT_14c9c2d60 + 4) != 0)))) {
    return DAT_14c760930 != 0;
  }
  return false;
}



// FUNCTION 14177b8dc FUN_14177b8dc body=1104 status=ok
// SIG undefined FUN_14177b8dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14177b8dc(double *param_1,undefined4 param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_188 [40];
  double local_160 [3];
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_128 [4];
  double local_108 [15];
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  pdVar4 = (double *)&DAT_14c846400;
  pdVar5 = param_1;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar5 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca42668) && (FUN_144b3d300(&DAT_14ca42668), DAT_14ca42668 == -1)) {
    _DAT_14ca42650 = 0x3ff0000000000000;
    _DAT_14ca42658 = 0;
    DAT_14ca42660 = 0.0;
    _Init_thread_footer(&DAT_14ca42668);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca42688) && (FUN_144b3d300(&DAT_14ca42688), DAT_14ca42688 == -1)) {
    _DAT_14ca42670 = 0.0;
    _DAT_14ca42678 = 1.0;
    DAT_14ca42680 = 0.0;
    _Init_thread_footer(&DAT_14ca42688);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca426a8) && (FUN_144b3d300(&DAT_14ca426a8), DAT_14ca426a8 == -1)) {
    _DAT_14ca42690 = 0.0;
    dRam000000014ca42698 = 0.0;
    DAT_14ca426a0 = 1.0;
    _Init_thread_footer(&DAT_14ca426a8);
  }
  local_128[2] = DAT_14ca42680;
  local_128[0] = _DAT_14ca42670;
  local_128[1] = _DAT_14ca42678;
  uVar6 = SUB84(DAT_14ca426a0,0);
  uVar7 = (undefined4)((ulonglong)DAT_14ca426a0 >> 0x20);
  switch(param_2) {
  case 0:
    local_138 = DAT_14ca42660;
    uVar6 = _DAT_14ca42650;
    uVar7 = DAT_14ca42650_4;
    uVar8 = _DAT_14ca42658;
    uVar9 = DAT_14ca42658_4;
    break;
  case 1:
    uVar6 = SUB84(DAT_14ca42660,0);
    uVar7 = (undefined4)((ulonglong)DAT_14ca42660 >> 0x20);
    uVar8 = _DAT_14ca42650;
    uVar9 = DAT_14ca42650_4;
    uVar10 = _DAT_14ca42658;
    uVar11 = DAT_14ca42658_4;
    goto LAB_14177bacb;
  case 2:
    local_128[0] = -_DAT_14ca42690;
    local_128[1] = -dRam000000014ca42698;
    local_128[2] = -DAT_14ca426a0;
    local_148 = _DAT_14ca42670;
    uStack_140 = _DAT_14ca42678;
    local_138 = DAT_14ca42680;
    goto switchD_14177b9e5_default;
  case 3:
    local_128[2] = DAT_14ca426a0;
    local_128[0] = _DAT_14ca42690;
    local_128[1] = dRam000000014ca42698;
    uVar6 = SUB84(DAT_14ca42680,0);
    uVar7 = (undefined4)((ulonglong)DAT_14ca42680 >> 0x20);
    uVar8 = _DAT_14ca42670;
    uVar9 = DAT_14ca42670_4;
    uVar10 = _DAT_14ca42678;
    uVar11 = DAT_14ca42678_4;
LAB_14177bacb:
    dVar1 = (double)CONCAT44(uVar9,uVar8);
    dVar2 = (double)CONCAT44(uVar11,uVar10);
LAB_14177bad3:
    uStack_140 = -dVar2;
    local_148 = -dVar1;
    local_138 = -(double)CONCAT44(uVar7,uVar6);
    goto switchD_14177b9e5_default;
  case 4:
    local_138 = DAT_14ca426a0;
    uVar6 = _DAT_14ca42690;
    uVar7 = DAT_14ca42690_4;
    uVar8 = dRam000000014ca42698._0_4_;
    uVar9 = dRam000000014ca42698._4_4_;
    break;
  case 5:
    dVar1 = _DAT_14ca42690;
    dVar2 = dRam000000014ca42698;
    goto LAB_14177bad3;
  default:
    goto switchD_14177b9e5_default;
  }
  local_148 = (double)CONCAT44(uVar7,uVar6);
  uStack_140 = (double)CONCAT44(uVar9,uVar8);
switchD_14177b9e5_default:
  local_160[2] = local_128[0] * uStack_140 - local_148 * local_128[1];
  local_160[1] = local_128[2] * local_148 - local_138 * local_128[0];
  local_160[0] = local_128[1] * local_138 - uStack_140 * local_128[2];
  lVar3 = 0;
  do {
    *(undefined8 *)((longlong)local_108 + lVar3 * 4) = *(undefined8 *)((longlong)local_160 + lVar3);
    *(undefined8 *)((longlong)local_108 + lVar3 * 4 + 8) =
         *(undefined8 *)((longlong)local_128 + lVar3);
    *(undefined8 *)((longlong)local_108 + lVar3 * 4 + 0x10) =
         *(undefined8 *)((longlong)&local_148 + lVar3);
    *(undefined8 *)((longlong)local_108 + lVar3 * 4 + 0x18) = 0;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  local_108[0xc] =
       local_160[2] * DAT_14c8464f0 + local_160[0] * DAT_14c8464e0 + local_160[1] * DAT_14c8464e8;
  local_108[0xd] =
       local_128[2] * DAT_14c8464f0 + local_128[0] * DAT_14c8464e0 + local_128[1] * DAT_14c8464e8;
  local_108[0xe] =
       local_138 * DAT_14c8464f0 + local_148 * DAT_14c8464e0 + uStack_140 * DAT_14c8464e8;
  local_90 = 0x3ff0000000000000;
  pdVar4 = local_108;
  pdVar5 = param_1;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar5 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14177bd2e FUN_14177bd2e body=60 status=ok
// SIG undefined FUN_14177bd2e(void)

undefined8 FUN_14177bd2e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 0x148) == 0) || ((~*(uint *)(param_2 + 0x158) & 0x7fffffff) == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_1400338f4(*(longlong *)(param_2 + 0x148) + 0x3f08,*(undefined4 *)(param_2 + 0x15c));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14177bd6a FUN_14177bd6a body=62 status=ok
// SIG undefined FUN_14177bd6a(void)

void FUN_14177bd6a(undefined8 param_1,undefined4 *param_2)

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
  FUN_1400e4416();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14177bdaa FUN_14177bdaa body=595 status=ok
// SIG undefined FUN_14177bdaa(void)

void FUN_14177bdaa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  undefined1 auStack_528 [32];
  longlong local_508;
  undefined1 *local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  undefined8 local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  undefined1 local_498 [1024];
  longlong local_98;
  undefined8 local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_98 = 0;
  local_88 = 0x1000000000;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0x10);
  if (pcVar2 == FUN_14499f0dc) {
    local_4b8 = (double)*(float *)(plVar1 + 0x5a);
    dVar3 = (double)*(float *)(plVar1 + 0x53);
    if (0.70710677 <= *(float *)(plVar1 + 0x5a)) {
      local_4a0 = dVar3 / (local_4b8 + local_4b8);
      local_4a8 = (double)plVar1[0x12] * local_4a0;
      local_4b0 = (double)plVar1[0xe] * local_4a0;
      local_4b8 = (double)plVar1[10] * local_4a0;
    }
    else {
      local_4a0 = (double)*(float *)(plVar1 + 0x5b) * dVar3;
      local_4a8 = (double)plVar1[0x12] * dVar3 * local_4b8;
      local_4b0 = (double)plVar1[0xe] * dVar3 * local_4b8;
      local_4b8 = (double)plVar1[10] * dVar3 * local_4b8;
    }
    local_4b8 = (double)plVar1[0x26] + local_4b8;
    local_4b0 = (double)plVar1[0x27] + local_4b0;
    local_4a8 = (double)plVar1[0x28] + local_4a8;
  }
  else if (pcVar2 == FUN_14499f08a) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    if (pcVar2 == (code *)&LAB_144774e28) {
      fVar4 = *(float *)(plVar1 + 0x53);
    }
    else {
      fVar4 = (float)(*pcVar2)(plVar1);
    }
    local_4a0 = (double)fVar4;
    local_4b8 = (double)plVar1[4];
    local_4b0 = (double)plVar1[5];
    local_4a8 = (double)plVar1[6];
  }
  else {
    (*pcVar2)(plVar1,&local_4b8);
  }
  local_4e0 = 0;
  local_4c0 = 0;
  local_500 = local_498;
  local_508 = param_2;
  local_4f8 = local_4b8;
  local_4f0 = local_4b0;
  local_4e8 = local_4a8;
  local_4d8 = local_4a0;
  local_4d0 = local_4a0;
  local_4c8 = local_4a0;
  FUN_1406f7ef4(param_1,0,param_1);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14177bffe FUN_14177bffe body=506 status=ok
// SIG undefined FUN_14177bffe(void)

void FUN_14177bffe(longlong param_1,double *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  ulonglong uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  uStack_c0 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x4d80)) {
    lVar4 = 0;
    fVar6 = 0.0;
    local_a8 = 0.0;
    dStack_b0 = 0.0;
    local_b8 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    iVar5 = 0;
    fVar7 = 0.0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4d78) + lVar4 * 8);
      if (*(char *)(lVar2 + 0x44) == '\0') {
        fVar1 = *(float *)(lVar2 + 0x30);
        fVar9 = fVar9 + *(float *)(lVar2 + 0x34) * fVar1;
        fVar8 = fVar8 + *(float *)(lVar2 + 0x38) * fVar1;
        fVar6 = fVar6 + *(float *)(lVar2 + 0x3c) * fVar1;
        dVar3 = (double)fVar1;
        local_b8 = local_b8 + dVar3 * *(double *)(lVar2 + 0x18);
        dStack_b0 = dStack_b0 + *(double *)(lVar2 + 0x20) * dVar3;
        local_a8 = local_a8 + *(double *)(lVar2 + 0x28) * dVar3;
        fVar7 = fVar7 + fVar1;
        iVar5 = iVar5 + 1;
      }
      lVar4 = lVar4 + 1;
    } while (*(int *)(param_1 + 0x4d80) != lVar4);
    local_c8 = CONCAT44(fVar8,fVar9);
    uStack_c0 = (ulonglong)(uint)fVar6;
    FUN_14020b04a(&local_c8,fVar7);
    if (iVar5 != 0) goto LAB_14177c15e;
  }
  local_b8 = 1.0;
  dStack_b0 = 0.0;
  local_a8 = 0.0;
LAB_14177c15e:
  param_2[2] = local_a8;
  *param_2 = local_b8;
  param_2[1] = dStack_b0;
  *param_3 = (undefined4)local_c8;
  *param_4 = local_c8._4_4_;
  *param_5 = (undefined4)uStack_c0;
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14177c1fa FUN_14177c1fa body=109 status=ok
// SIG undefined FUN_14177c1fa(void)

void FUN_14177c1fa(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5700));
  iVar1 = *(int *)(param_1 + 0x5730);
  *(uint *)(param_1 + 0x5730) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5734) < iVar1 + 1U) {
    FUN_1458b315c((longlong *)(param_1 + 0x5728),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x5728) + (longlong)iVar1 * 8) = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00014177c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5700));
  return;
}



// FUNCTION 14177c268 FUN_14177c268 body=231 status=ok
// SIG undefined FUN_14177c268(void)

void FUN_14177c268(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  int local_48;
  int local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x56c8));
  lVar3 = *(longlong *)(param_1 + 0x5728);
  *(undefined8 *)(param_1 + 0x5728) = 0;
  iVar1 = *(int *)(param_1 + 0x5730);
  iVar2 = *(int *)(param_1 + 0x5734);
  *(undefined8 *)(param_1 + 0x5730) = 0;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1402215fa(param_1 + 0x5728,iVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x56c8));
  if (iVar1 < 1) {
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
    }
  }
  else {
    local_68 = 0;
    local_58 = &PTR_LAB_14a2e9740;
    local_78 = FUN_142fcf788;
    local_50 = lVar3;
    local_48 = iVar1;
    local_44 = iVar2;
    FUN_1407461b0(1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14177c364 FUN_14177c364 body=40 status=ok
// SIG undefined FUN_14177c364(void)

undefined8 FUN_14177c364(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177c38c FUN_14177c38c body=40 status=ok
// SIG undefined FUN_14177c38c(void)

undefined8 FUN_14177c38c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177c3b4 FUN_14177c3b4 body=38 status=ok
// SIG undefined FUN_14177c3b4(void)

undefined8 FUN_14177c3b4(undefined8 param_1,int param_2)

{
  FUN_1400468f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177c3da FUN_14177c3da body=26 status=ok
// SIG undefined FUN_14177c3da(void)

void FUN_14177c3da(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140638a20(param_1,*(undefined4 *)(param_1 + 8),param_2,0x18);
    return;
  }
  return;
}



// FUNCTION 14177c3f4 FUN_14177c3f4 body=40 status=ok
// SIG undefined FUN_14177c3f4(void)

undefined8 FUN_14177c3f4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177c41c FUN_14177c41c body=40 status=ok
// SIG undefined FUN_14177c41c(void)

undefined8 FUN_14177c41c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177c444 FUN_14177c444 body=40 status=ok
// SIG undefined FUN_14177c444(void)

undefined8 FUN_14177c444(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177c46c FUN_14177c46c body=306 status=ok
// SIG undefined FUN_14177c46c(void)

void FUN_14177c46c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14177c4ce;
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
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_14177c4ce:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 14177c59e FUN_14177c59e body=107 status=ok
// SIG undefined FUN_14177c59e(void)

undefined8 * FUN_14177c59e(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  FUN_14473de44(param_1 + 4);
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[10] = &DAT_100000001;
  param_1[0xd] = &DAT_100000001;
  param_1[0xe] = 0;
  FUN_14471858a(param_1 + 0xb,1);
  return param_1;
}



// FUNCTION 14177c60a FUN_14177c60a body=107 status=ok
// SIG undefined FUN_14177c60a(void)

undefined8 * FUN_14177c60a(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  FUN_14473de44(param_1 + 4);
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[10] = &DAT_100000001;
  param_1[0xd] = &DAT_100000001;
  param_1[0xe] = 0;
  FUN_14471858a(param_1 + 0xb,1);
  return param_1;
}



// FUNCTION 14177c676 FUN_14177c676 body=71 status=ok
// SIG undefined FUN_14177c676(void)

undefined8 * FUN_14177c676(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e8208;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177c6be FUN_14177c6be body=799 status=ok
// SIG undefined FUN_14177c6be(void)

int * FUN_14177c6be(longlong *param_1,int *param_2,ulonglong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_14025f618(param_1,iVar13);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar5 = iVar14 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar14 + 1;
    iVar12 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar12 = iVar14;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar5 = 0x80;
        }
        else {
          uVar15 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar15) {
              uVar16 = uVar15;
            }
          }
          else {
            uVar16 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          iVar5 = -0x20;
          if (uVar15 <= uVar16) {
            iVar5 = uVar16 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar5;
        FUN_1401f5dc4(plVar9,iVar14);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar9;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar6 = (longlong)iVar13;
    iVar14 = *(int *)(*param_1 + 4 + lVar6 * 0x10);
    *(int *)(param_1 + 6) = iVar14;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x10) = 0xffffffff;
    }
  }
  iVar14 = 1;
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar5 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  lVar3 = *param_1;
  lVar6 = lVar6 * 0x10;
  uVar10 = *param_3;
  *(ulonglong *)(lVar3 + lVar6) = uVar10;
  *(undefined4 *)(lVar3 + 8 + lVar6) = 0xffffffff;
  uVar15 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  uVar15 = uVar15 >> 0x10 ^ uVar15;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    plVar9 = param_1 + 8;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[10];
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[0xb] - 1U & uVar15) * 4);
    if (iVar5 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar5 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x10) == uVar10) {
          *puVar2 = uVar10;
          FUN_1472d5a3c(param_1,iVar13);
          goto LAB_14177c8b2;
        }
        iVar5 = (int)puVar2[1];
      } while (iVar5 != -1);
    }
  }
  if (3 < uVar16) {
    uVar10 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar4 & 0x1f);
  }
  iVar5 = iVar13;
  if (((int)uVar16 < 1) || (iVar14 <= (int)param_1[0xb])) {
    uVar15 = (int)param_1[0xb] - 1U & uVar15;
    *(uint *)(lVar3 + lVar6 + 0xc) = uVar15;
    plVar9 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar9 = param_1 + 8;
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(lVar3 + lVar6 + 8) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[0xb] - 1U & (longlong)(int)uVar15) * 4);
    plVar9 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar9 = param_1 + 8;
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[0xb] - 1U & (longlong)(int)uVar15) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 0xb) = iVar14;
    FUN_144913eca(param_1);
  }
LAB_14177c8b2:
  *param_2 = iVar5;
  return param_2;
}



// FUNCTION 14177c9de FUN_14177c9de body=369 status=ok
// SIG undefined FUN_14177c9de(void)

void FUN_14177c9de(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x4a8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14177ca66;
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
LAB_14177ca66:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x4a8)) {
    uVar7 = uVar5 / 0x4a8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x4a8,8);
  return;
}



// FUNCTION 14177cb50 FUN_14177cb50 body=156 status=ok
// SIG undefined FUN_14177cb50(void)

void FUN_14177cb50(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x4a8)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x4a8,8);
      uVar3 = uVar3 / 0x4a8;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x4a8,8);
    }
  }
  return;
}



// FUNCTION 14177cbec FUN_14177cbec body=373 status=ok
// SIG undefined FUN_14177cbec(void)

void FUN_14177cbec(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14177cc75;
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
LAB_14177cc75:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14177cd62 FUN_14177cd62 body=153 status=ok
// SIG undefined FUN_14177cd62(void)

void FUN_14177cd62(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 14177cdfc FUN_14177cdfc body=343 status=ok
// SIG undefined FUN_14177cdfc(void)

void FUN_14177cdfc(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar7 = (ulonglong)uVar3;
  iVar4 = *(int *)(param_1 + 0xc);
  if (((0x3fff < iVar4 - uVar3) || ((int)(uVar3 * 3) < iVar4 * 2)) &&
     (uVar3 == 0 || 0x40 < (int)(iVar4 - uVar3))) {
    if ((0 < (int)uVar3) && (DAT_14c872d28 != (longlong *)0x0)) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar7 = uVar7 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
        }
        else {
          uVar5 = (ulonglong)((uint)uVar7 & 0xfffffff0);
          if (uVar5 < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14177ce92;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,1);
        iVar4 = *(int *)(param_1 + 0xc);
      }
    }
LAB_14177ce92:
    if ((int)uVar7 != iVar4) {
      *(int *)(param_1 + 0xc) = (int)uVar7;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar7,1,1);
    }
  }
  return;
}



// FUNCTION 14177cf54 FUN_14177cf54 body=370 status=ok
// SIG undefined FUN_14177cf54(void)

void FUN_14177cf54(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x3ffffffffffff000U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 4;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0x1ffd) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x3fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14177cffb;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x3fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14177cffb:
      uVar5 = uVar5 >> 2 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,4);
    }
  }
  return;
}



// FUNCTION 14177d0c6 FUN_14177d0c6 body=320 status=ok
// SIG undefined FUN_14177d0c6(void)

void FUN_14177d0c6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177d12f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14177d12f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14177d206 FUN_14177d206 body=320 status=ok
// SIG undefined FUN_14177d206(void)

void FUN_14177d206(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177d26f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14177d26f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14177d346 FUN_14177d346 body=320 status=ok
// SIG undefined FUN_14177d346(void)

void FUN_14177d346(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177d3af;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14177d3af:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14177d486 FUN_14177d486 body=304 status=ok
// SIG undefined FUN_14177d486(void)

void FUN_14177d486(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (ulonglong)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = (uint)uVar4 & 0xfffffff0;
          if (uVar5 < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177d4eb;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = DAT_14c841df8;
          }
          uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(ulonglong)param_2,1);
      }
    }
LAB_14177d4eb:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar5 = uVar3;
    }
  }
  if (uVar5 != *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,1,1);
  }
  return;
}



// FUNCTION 14177d5b6 FUN_14177d5b6 body=320 status=ok
// SIG undefined FUN_14177d5b6(void)

void FUN_14177d5b6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177d61f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14177d61f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 14177d6f6 FUN_14177d6f6 body=315 status=ok
// SIG undefined FUN_14177d6f6(void)

void FUN_14177d6f6(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 4;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177d760;
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
LAB_14177d760:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,4);
  }
  return;
}



// FUNCTION 14177d832 FUN_14177d832 body=304 status=ok
// SIG undefined FUN_14177d832(void)

void FUN_14177d832(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (ulonglong)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = (uint)uVar4 & 0xfffffff0;
          if (uVar5 < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177d897;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = DAT_14c841df8;
          }
          uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(ulonglong)param_2,1);
      }
    }
LAB_14177d897:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar5 = uVar3;
    }
  }
  if (uVar5 != *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,1,1);
  }
  return;
}



// FUNCTION 14177d962 FUN_14177d962 body=318 status=ok
// SIG undefined FUN_14177d962(void)

void FUN_14177d962(longlong param_1,uint param_2)

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
    uVar4 = (ulonglong)param_2 * 2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x3ff9) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177d9ca;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1fffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,2);
      }
    }
LAB_14177d9ca:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 >> 1)) {
      uVar3 = uVar4 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,2,2);
  }
  return;
}



// FUNCTION 14177daa0 FUN_14177daa0 body=320 status=ok
// SIG undefined FUN_14177daa0(void)

void FUN_14177daa0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177db09;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14177db09:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14177dbe0 FUN_14177dbe0 body=304 status=ok
// SIG undefined FUN_14177dbe0(void)

void FUN_14177dbe0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (ulonglong)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = (uint)uVar4 & 0xfffffff0;
          if (uVar5 < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177dc45;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = DAT_14c841df8;
          }
          uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(ulonglong)param_2,1);
      }
    }
LAB_14177dc45:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar5 = uVar3;
    }
  }
  if (uVar5 != *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,1,1);
  }
  return;
}



// FUNCTION 14177dd10 FUN_14177dd10 body=170 status=ok
// SIG undefined FUN_14177dd10(void)

undefined8 FUN_14177dd10(longlong param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 0x12000;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar2 = (ulonglong)DAT_14c841df8;
    }
    uVar2 = -uVar2 & uVar2 + 0x11fff;
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x12000,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar4 = 0x7fffffff;
  if (0x3ff < (int)(uVar2 / 0x48)) {
    uVar4 = uVar2 / 0x48 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x48,8);
  }
  return uVar3;
}



// FUNCTION 14177ddba FUN_14177ddba body=328 status=ok
// SIG undefined FUN_14177ddba(void)

void FUN_14177ddba(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14177de24;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_14177de24:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar8,0x38,8);
  }
  return;
}



// FUNCTION 14177df02 FUN_14177df02 body=366 status=ok
// SIG undefined FUN_14177df02(void)

void FUN_14177df02(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14177df87;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_14177df87:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 14177e070 FUN_14177e070 body=48 status=ok
// SIG undefined FUN_14177e070(void)

void FUN_14177e070(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    FUN_140082c84(param_1,0,param_2,8);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 14177e0a0 FUN_14177e0a0 body=48 status=ok
// SIG undefined FUN_14177e0a0(void)

void FUN_14177e0a0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 14177e0d0 FUN_14177e0d0 body=180 status=ok
// SIG undefined FUN_14177e0d0(void)

longlong * FUN_14177e0d0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 14177e184 FUN_14177e184 body=444 status=ok
// SIG undefined FUN_14177e184(void)

void FUN_14177e184(longlong *param_1,int param_2,int param_3,byte param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong lStack_1b0;
  uint auStack_1a4 [43];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(int *)((longlong)param_1 + 0xc4) != param_2) {
    param_3 = param_3 << (param_4 & 0x1f);
    *(int *)((longlong)param_1 + 0xc4) = param_2;
    lVar3 = param_1[0x19];
    if (param_3 != (int)lVar3) {
      memset(&local_1b8,0,0xc0);
      if ((int)lVar3 != 0) {
        uVar5 = 0;
        plVar2 = param_1;
        do {
          uVar1 = (longlong)(int)*(uint *)((longlong)plVar2 + 0x14) % (longlong)param_3 & 0xffffffff
          ;
          plVar4 = &local_1b8 + uVar1 * 3;
          if (auStack_1a4[uVar1 * 6] < *(uint *)((longlong)plVar2 + 0x14)) {
            FUN_1472d9f06(plVar2,plVar4);
            local_e8 = plVar2[2];
            local_f8 = *plVar2;
            lStack_f0 = plVar2[1];
            plVar2[2] = *(longlong *)(&stack0xfffffffffffffe58 + uVar1 * 0x18);
            lVar3 = (&lStack_1b0)[uVar1 * 3];
            *plVar2 = *plVar4;
            plVar2[1] = lVar3;
            *(longlong *)(&stack0xfffffffffffffe58 + uVar1 * 0x18) = local_e8;
            lVar3 = lStack_f0;
            *plVar4 = local_f8;
            (&lStack_1b0)[uVar1 * 3] = lVar3;
          }
          else {
            FUN_1472d9f06(plVar4,plVar2);
          }
          uVar5 = uVar5 + 1;
          plVar2 = plVar2 + 3;
        } while (uVar5 < *(uint *)(param_1 + 0x19));
      }
      memcpy(&local_f8,param_1,0xc0);
      memcpy(param_1,&local_1b8,0xc0);
      memcpy(&local_1b8,&local_f8,0xc0);
      *(int *)(param_1 + 0x19) = param_3;
      lVar3 = 0xa8;
      do {
        FUN_141474ffa(*(undefined8 *)((longlong)&local_1b8 + lVar3),
                      *(undefined4 *)((longlong)&lStack_1b0 + lVar3));
        if (*(longlong *)((longlong)&local_1b8 + lVar3) != 0) {
          FUN_1400020a8();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x18);
      param_2 = *(int *)((longlong)param_1 + 0xc4);
      param_3 = (int)param_1[0x19];
    }
    uVar5 = (longlong)param_2 % (longlong)param_3 & 0xffffffff;
    *(int *)(param_1 + 0x18) = (int)((longlong)param_2 % (longlong)param_3);
    *(undefined4 *)(param_1 + uVar5 * 3 + 2) = 0;
    *(int *)((longlong)param_1 + uVar5 * 0x18 + 0x14) = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14177e342 FUN_14177e342 body=347 status=ok
// SIG undefined FUN_14177e342(void)

uint * FUN_14177e342(uint *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca469c8) {
    FUN_144b3d300(&DAT_14ca469c8);
    if (DAT_14ca469c8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca469c0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite",1);
      _Init_thread_footer(&DAT_14ca469c8);
    }
  }
  if (DAT_14ca469c0 == (longlong *)0x0) {
    uVar7 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_14ca469c0 + 0xb0))();
    uVar7 = (uint)(iVar2 != 0) << 3;
  }
  lVar1 = DAT_14ca97170;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar6 = 0;
  }
  else if (iVar2 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  uVar3 = (uint)(0 < *(int *)(lVar1 + uVar6 * 4)) * 4 + 4;
  if (uVar3 < uVar7) {
    uVar3 = uVar7;
  }
  *param_1 = *param_2 + (uVar3 - 1) & -uVar3;
  param_1[1] = (uVar3 - 1) + param_2[1] & -uVar3;
  return param_1;
}



// FUNCTION 14177e49e FUN_14177e49e body=100 status=ok
// SIG undefined FUN_14177e49e(void)

void FUN_14177e49e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2f1c30;
  FUN_14470d152(param_1 + 10);
  FUN_140460ed8(param_1 + 0xb,0);
  FUN_1400200e4(param_1 + 0xf);
  FUN_1400e0d24(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14177e502 FUN_14177e502 body=122 status=ok
// SIG undefined FUN_14177e502(void)

void FUN_14177e502(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = 0x2000;
  if (0x2000 < *(uint *)(param_1 + 8)) {
    uVar4 = *(uint *)(param_1 + 8);
  }
  uVar1 = (ulonglong)(uVar4 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  if (1 << ((byte)lVar2 & 0x1f) < iVar3) {
    if (lVar2 == 0x1f) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(0x80000000);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_1401a2d6a(param_1);
    iVar3 = *(int *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < iVar3) {
    return;
  }
  FUN_1401a2d6a(param_1,0);
  return;
}



// FUNCTION 14177e57e FUN_14177e57e body=38 status=ok
// SIG undefined FUN_14177e57e(void)

undefined8 FUN_14177e57e(undefined8 param_1,int param_2)

{
  FUN_14473260c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177e5a4 FUN_14177e5a4 body=212 status=ok
// SIG undefined FUN_14177e5a4(void)

void FUN_14177e5a4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 14177e678 FUN_14177e678 body=320 status=ok
// SIG undefined FUN_14177e678(void)

void FUN_14177e678(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177e6e1;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14177e6e1:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 14177e7b8 FUN_14177e7b8 body=63 status=ok
// SIG undefined FUN_14177e7b8(void)

longlong FUN_14177e7b8(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177e7f8 FUN_14177e7f8 body=63 status=ok
// SIG undefined FUN_14177e7f8(void)

longlong FUN_14177e7f8(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177e838 FUN_14177e838 body=63 status=ok
// SIG undefined FUN_14177e838(void)

longlong FUN_14177e838(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177e878 FUN_14177e878 body=63 status=ok
// SIG undefined FUN_14177e878(void)

longlong FUN_14177e878(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177e8b8 FUN_14177e8b8 body=44 status=ok
// SIG undefined FUN_14177e8b8(void)

longlong FUN_14177e8b8(longlong param_1,int param_2)

{
  FUN_140020148(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177e8e4 FUN_14177e8e4 body=40 status=ok
// SIG undefined FUN_14177e8e4(void)

undefined8 FUN_14177e8e4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177e90c FUN_14177e90c body=527 status=ok
// SIG undefined FUN_14177e90c(void)

void FUN_14177e90c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  int *piVar9;
  ulonglong _Size;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar7 = 4;
    if (4 < uVar6) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar7 = uVar6 + (int)((ulonglong)((longlong)(int)uVar6 * 3) >> 3) + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar6 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,8);
  }
  _Src = (void *)*param_1;
  if (uVar8 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14177ea4c:
      piVar9 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar9);
        }
        else {
          FUN_144705e74(piVar9);
        }
      }
    }
LAB_14177ea96:
    *param_1 = _Dst;
    return;
  }
  _Size = (ulonglong)uVar8 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14177e990;
LAB_14177e985:
  FUN_14472e504(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_14177e990:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (uVar8 < 0x1ff5) goto code_r0x00014177e9bc;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar3 + 0x10) = puVar3 + (ulonglong)uVar8 * 2 + 0x18;
    *puVar3 = 1;
  }
  else {
    uVar6 = puVar3[0x12] + 1;
LAB_14177ea12:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar6;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14177ea96;
  uVar2 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar2 != 0) {
    if (uVar2 < _Size) {
      _Size = uVar2;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14177ea4c;
code_r0x00014177e9bc:
  uVar6 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar7 = *puVar3;
    *puVar3 = *puVar3 + uVar6 + 1;
    UNLOCK();
    if ((uVar7 ^ uVar6) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar6 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar6 = 1;
      goto LAB_14177ea12;
    }
  }
  goto LAB_14177e985;
}



// FUNCTION 14177eb1c FUN_14177eb1c body=527 status=ok
// SIG undefined FUN_14177eb1c(void)

void FUN_14177eb1c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  int *piVar9;
  ulonglong _Size;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar7 = 4;
    if (4 < uVar6) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar7 = uVar6 + (int)((ulonglong)((longlong)(int)uVar6 * 3) >> 3) + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar6 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,8);
  }
  _Src = (void *)*param_1;
  if (uVar8 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14177ec5c:
      piVar9 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar9);
        }
        else {
          FUN_144705e74(piVar9);
        }
      }
    }
LAB_14177eca6:
    *param_1 = _Dst;
    return;
  }
  _Size = (ulonglong)uVar8 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14177eba0;
LAB_14177eb95:
  FUN_14472e504(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_14177eba0:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (uVar8 < 0x1ff5) goto code_r0x00014177ebcc;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar3 + 0x10) = puVar3 + (ulonglong)uVar8 * 2 + 0x18;
    *puVar3 = 1;
  }
  else {
    uVar6 = puVar3[0x12] + 1;
LAB_14177ec22:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar6;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14177eca6;
  uVar2 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar2 != 0) {
    if (uVar2 < _Size) {
      _Size = uVar2;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14177ec5c;
code_r0x00014177ebcc:
  uVar6 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar7 = *puVar3;
    *puVar3 = *puVar3 + uVar6 + 1;
    UNLOCK();
    if ((uVar7 ^ uVar6) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar6 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar6 = 1;
      goto LAB_14177ec22;
    }
  }
  goto LAB_14177eb95;
}



// FUNCTION 14177ed2c FUN_14177ed2c body=274 status=ok
// SIG undefined FUN_14177ed2c(void)

void FUN_14177ed2c(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  do {
    do {
      uVar2 = *param_1;
      uVar6 = (uint)uVar2;
      if ((uVar2 & 0x3ffffff) == 0) {
        return;
      }
      uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
      if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      uVar5 = (ulonglong)((uVar6 & 0x3ffffff) >> 0xe);
      lVar3 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
      LOCK();
      uVar1 = *param_1;
      if (uVar2 == uVar1) {
        *param_1 = uVar4 | *(uint *)(lVar3 + 0x10 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
      }
      UNLOCK();
    } while (uVar2 != uVar1);
    *(undefined4 *)(lVar3 + (ulonglong)(uVar6 & 0x3fff) * 0x18 + 0x10) = 0;
    lVar3 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar6 & 0x3ffffff);
  } while (lVar3 != 0);
  return;
}



// FUNCTION 14177ee3e FUN_14177ee3e body=40 status=ok
// SIG undefined FUN_14177ee3e(void)

undefined8 FUN_14177ee3e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177ee66 FUN_14177ee66 body=353 status=ok
// SIG undefined FUN_14177ee66(void)

void FUN_14177ee66(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14177eeeb;
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
LAB_14177eeeb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14177efc8 FUN_14177efc8 body=303 status=ok
// SIG undefined FUN_14177efc8(void)

void FUN_14177efc8(void *param_1,int param_2)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x88);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x21) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x20;
    _Src = *(void **)((longlong)param_1 + 0x80);
joined_r0x00014177f0a6:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    uVar1 = 0;
    goto LAB_14177f07e;
  }
  if (*(uint *)((longlong)param_1 + 0x8c) < 0x21) {
    *(uint *)((longlong)param_1 + 0x8c) = uVar2;
LAB_14177f005:
    _Src = *(void **)((longlong)param_1 + 0x80);
    uVar1 = uVar2;
  }
  else {
    uVar1 = (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + uVar2 + 0x10;
    if ((int)uVar1 < (int)uVar2) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0x7fffffff;
      uVar2 = 0x7fffffff;
      goto LAB_14177f005;
    }
    *(uint *)((longlong)param_1 + 0x8c) = uVar1;
    _Src = *(void **)((longlong)param_1 + 0x80);
    if (uVar1 < 0x21) goto joined_r0x00014177f0a6;
  }
  if (_Src == (void *)0x0) {
    FUN_140064110((longlong)param_1 + 0x80,0,uVar1,4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 2);
    return;
  }
LAB_14177f07e:
  FUN_140064110((longlong)param_1 + 0x80,param_2,uVar1,4);
  return;
}



// FUNCTION 14177f0f8 FUN_14177f0f8 body=21 status=ok
// SIG undefined FUN_14177f0f8(void)

void FUN_14177f0f8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_14016e816(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14177f10e FUN_14177f10e body=197 status=ok
// SIG undefined FUN_14177f10e(void)

longlong FUN_14177f10e(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177f1d4 FUN_14177f1d4 body=14 status=ok
// SIG undefined FUN_14177f1d4(void)

void FUN_14177f1d4(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400f75ba();
    return;
  }
  return;
}



// FUNCTION 14177f1e2 FUN_14177f1e2 body=182 status=ok
// SIG undefined FUN_14177f1e2(void)

void FUN_14177f1e2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x13c10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar2 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar2 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x13c10)) {
      uVar2 = uVar1 / 0x13c10 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x13c10,0x10);
  }
  return;
}



// FUNCTION 14177f298 FUN_14177f298 body=320 status=ok
// SIG undefined FUN_14177f298(void)

void FUN_14177f298(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177f301;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14177f301:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14177f3d8 FUN_14177f3d8 body=320 status=ok
// SIG undefined FUN_14177f3d8(void)

void FUN_14177f3d8(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14177f441;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14177f441:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14177f518 FUN_14177f518 body=33 status=ok
// SIG undefined FUN_14177f518(void)

undefined8 FUN_14177f518(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_14494b062(param_1,param_2,*(undefined8 *)(*(longlong *)(param_3 + 8) + 0x348));
  return param_1;
}



// FUNCTION 14177f539 FUN_14177f539 body=159 status=ok
// SIG undefined FUN_14177f539(void)

undefined8 *
FUN_14177f539(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  if (param_4 < 3) {
    uVar1 = FUN_1472e1757(param_2,param_3,param_5 >> 8 & 4 | (uint)((param_5 & 0x1f8) != 0));
    lVar2 = FUN_144a890ae();
    cVar3 = '\x02';
    if (*(char *)(lVar2 + 0x41) != '\x03') {
      cVar3 = *(char *)(lVar2 + 0x41);
    }
    param_1[2] = uVar1;
    *(char *)(param_1 + 3) = cVar3;
  }
  else {
    uVar1 = FUN_1448e2c77(param_2,param_3);
    lVar2 = FUN_14482e3b2();
    cVar3 = '\x02';
    if (*(char *)(lVar2 + 0x41) != '\x03') {
      cVar3 = *(char *)(lVar2 + 0x41);
    }
    *param_1 = uVar1;
    *(char *)(param_1 + 1) = cVar3;
  }
  return param_1;
}



// FUNCTION 14177f5d8 FUN_14177f5d8 body=183 status=ok
// SIG undefined FUN_14177f5d8(void)

void FUN_14177f5d8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)
           (*(longlong *)(param_1 + 0x80) + (longlong)(*(int *)(param_1 + 0x88) + -1) * 8);
  iVar2 = *(int *)(lVar1 + 0x60);
  if (iVar2 == 0) {
    iVar2 = *(int *)(lVar1 + 0x68);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (*(int *)(lVar1 + 100) < iVar2) {
      FUN_1447a0e40(lVar1 + 0x58);
      iVar2 = *(int *)(lVar1 + 0x60);
    }
    else {
      iVar2 = 0;
    }
  }
  *(uint *)(lVar1 + 0x60) = iVar2 + 1U;
  if (*(uint *)(lVar1 + 100) < iVar2 + 1U) {
    FUN_144a78748(lVar1 + 0x58,iVar2);
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x58) + (longlong)iVar2 * 4) = param_2;
  if (*(int *)(lVar1 + 0x60) < *(int *)(lVar1 + 0x68)) {
    return;
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_14008d6fe(lVar1);
  }
  FUN_14008d3e6(param_1);
  return;
}



// FUNCTION 14177f68f FUN_14177f68f body=331 status=ok
// SIG undefined FUN_14177f68f(void)

longlong FUN_14177f68f(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (ulonglong *)(**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  uVar2 = *puVar5;
  if (uVar2 == 0) {
    lVar6 = 0;
  }
  else {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = uVar3 & 0x7fffffff ^ uVar3 >> 0x10;
    uVar3 = *(uint *)(param_1 + 0x248);
    uVar9 = uVar3 & uVar4;
    lVar6 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x238);
    }
    do {
      if (*(uint *)(lVar6 + (longlong)(int)uVar9 * 4) == uVar4) {
        lVar8 = *(longlong *)(param_1 + 0x220);
        if (*(longlong *)(param_1 + 0x220) == 0) {
          lVar8 = param_1 + 0x218;
        }
        iVar1 = *(int *)(lVar8 + (longlong)(int)uVar9 * 4);
        lVar8 = (longlong)iVar1 * 0x10;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x1d8) + lVar8) == uVar2) {
          if (((iVar1 != -1) &&
              (plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1d8) + lVar8 + 8),
              plVar7 != (longlong *)0x0)) && (lVar6 = *plVar7, lVar6 != 0)) goto LAB_14177f7ac;
          break;
        }
      }
      uVar9 = uVar9 + 1 & uVar3;
    } while (uVar9 != (uVar4 + *(int *)(param_1 + 0x24c) + 1 & uVar3));
    FUN_1447ec05f(&local_30,uVar2,L"ViewFamilyTexture");
    lVar6 = FUN_14473c272(param_1,&local_30,0);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x38))();
    }
LAB_14177f7ac:
    *(undefined4 *)(lVar6 + 0x58) = 0x1000;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14177f7dc FUN_14177f7dc body=205 status=ok
// SIG undefined FUN_14177f7dc(void)

float * FUN_14177f7dc(float *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 3;
  FUN_14473d930(&local_38,param_3,param_3 + 8,1);
  local_58 = 1;
  FUN_14473d930(&local_48,param_2,param_2 + 8,3);
  *param_1 = local_38 * local_48;
  param_1[1] = local_34 * local_44;
  param_1[2] = local_40 * local_38 + local_30;
  param_1[3] = local_3c * local_34 + local_2c;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14177f8aa FUN_14177f8aa body=201 status=ok
// SIG undefined FUN_14177f8aa(void)

undefined8 * FUN_14177f8aa(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177f974 FUN_14177f974 body=307 status=ok
// SIG undefined FUN_14177f974(void)

longlong * FUN_14177f974(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14177faa8 FUN_14177faa8 body=85 status=ok
// SIG undefined FUN_14177faa8(void)

void FUN_14177faa8(longlong param_1,int param_2)

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
    FUN_1404e0b3a();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14177fafe FUN_14177fafe body=527 status=ok
// SIG undefined FUN_14177fafe(void)

void FUN_14177fafe(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  int *piVar9;
  ulonglong _Size;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar7 = 4;
    if (4 < uVar6) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar7 = uVar6 + (int)((ulonglong)((longlong)(int)uVar6 * 3) >> 3) + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar6 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x10);
  }
  _Src = (void *)*param_1;
  if (uVar8 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14177fc3e:
      piVar9 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar9);
        }
        else {
          FUN_144705e74(piVar9);
        }
      }
    }
LAB_14177fc88:
    *param_1 = _Dst;
    return;
  }
  _Size = (ulonglong)uVar8 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14177fb82;
LAB_14177fb77:
  FUN_14472e504(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_14177fb82:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (uVar8 < 0xffb) goto code_r0x00014177fbae;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar3 + 0x10) = puVar3 + (ulonglong)uVar8 * 4 + 0x18;
    *puVar3 = 1;
  }
  else {
    uVar6 = puVar3[0x12] + 1;
LAB_14177fc04:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar6;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14177fc88;
  uVar2 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar2 != 0) {
    if (uVar2 < _Size) {
      _Size = uVar2;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14177fc3e;
code_r0x00014177fbae:
  uVar6 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar7 = *puVar3;
    *puVar3 = *puVar3 + uVar6 + 1;
    UNLOCK();
    if ((uVar7 ^ uVar6) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar6 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar6 = 1;
      goto LAB_14177fc04;
    }
  }
  goto LAB_14177fb77;
}



// FUNCTION 14177fd0e FUN_14177fd0e body=527 status=ok
// SIG undefined FUN_14177fd0e(void)

void FUN_14177fd0e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  int *piVar9;
  ulonglong _Size;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar7 = 4;
    if (4 < uVar6) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar7 = uVar6 + (int)((ulonglong)((longlong)(int)uVar6 * 3) >> 3) + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar6 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x10);
  }
  _Src = (void *)*param_1;
  if (uVar8 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14177fe4e:
      piVar9 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar9);
        }
        else {
          FUN_144705e74(piVar9);
        }
      }
    }
LAB_14177fe98:
    *param_1 = _Dst;
    return;
  }
  _Size = (ulonglong)uVar8 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14177fd92;
LAB_14177fd87:
  FUN_14472e504(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_14177fd92:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (uVar8 < 0xffb) goto code_r0x00014177fdbe;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar3 + 0x10) = puVar3 + (ulonglong)uVar8 * 4 + 0x18;
    *puVar3 = 1;
  }
  else {
    uVar6 = puVar3[0x12] + 1;
LAB_14177fe14:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar6;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14177fe98;
  uVar2 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar2 != 0) {
    if (uVar2 < _Size) {
      _Size = uVar2;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14177fe4e;
code_r0x00014177fdbe:
  uVar6 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar7 = *puVar3;
    *puVar3 = *puVar3 + uVar6 + 1;
    UNLOCK();
    if ((uVar7 ^ uVar6) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar6 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar6 = 1;
      goto LAB_14177fe14;
    }
  }
  goto LAB_14177fd87;
}



// FUNCTION 14177ff1e FUN_14177ff1e body=49 status=ok
// SIG undefined FUN_14177ff1e(void)

longlong FUN_14177ff1e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177ff50 FUN_14177ff50 body=21 status=ok
// SIG undefined FUN_14177ff50(void)

void FUN_14177ff50(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1401865a8(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14177ff66 FUN_14177ff66 body=170 status=ok
// SIG undefined FUN_14177ff66(void)

longlong FUN_14177ff66(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar1 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 != 0) {
    piVar3 = (int *)((lVar2 + -8) - (ulonglong)*(uint *)(lVar2 + -8));
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        lVar2 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar2 = FUN_145bdc178();
        }
        FUN_140028df4(lVar2,piVar3);
      }
      else {
        FUN_144705e74(piVar3);
      }
    }
  }
  FUN_1400200e4(param_1 + 0x40);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141780010 FUN_141780010 body=310 status=ok
// SIG undefined FUN_141780010(void)

longlong * FUN_141780010(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 141780146 FUN_141780146 body=299 status=ok
// SIG undefined FUN_141780146(void)

void FUN_141780146(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (longlong)param_2 * 8;
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
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417801a8;
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
LAB_1417801a8:
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar5 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 141780272 FUN_141780272 body=93 status=ok
// SIG undefined FUN_141780272(void)

void FUN_141780272(longlong param_1,int param_2)

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
    FUN_1400bd2f6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1417802d0 FUN_1417802d0 body=14 status=ok
// SIG undefined FUN_1417802d0(void)

void FUN_1417802d0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14008cb20();
    return;
  }
  return;
}



// FUNCTION 1417802de FUN_1417802de body=26 status=ok
// SIG undefined FUN_1417802de(void)

void FUN_1417802de(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140073d1c(param_1,*(undefined4 *)(param_1 + 8),param_2,0x18);
    return;
  }
  return;
}



// FUNCTION 1417802f8 FUN_1417802f8 body=182 status=ok
// SIG undefined FUN_1417802f8(void)

longlong FUN_1417802f8(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  FUN_140215426(param_1 + 0xb8,0x7fffffffffffffff);
  FUN_1447a1f08(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  FUN_14008e040(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar3 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x70);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar3 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x30);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417803ae FUN_1417803ae body=44 status=ok
// SIG undefined FUN_1417803ae(void)

longlong FUN_1417803ae(longlong param_1,int param_2)

{
  FUN_14008dfdc(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417803da FUN_1417803da body=37 status=ok
// SIG undefined FUN_1417803da(void)

void FUN_1417803da(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    FUN_140090ec0(param_1);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 141780400 FUN_141780400 body=40 status=ok
// SIG undefined FUN_141780400(void)

undefined8 FUN_141780400(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141780428 FUN_141780428 body=782 status=ok
// SIG undefined FUN_141780428(void)

void FUN_141780428(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar10 = (int)param_1[1];
  if (0 < iVar10) {
    lVar23 = 0;
    do {
      uVar8 = DAT_14c8464f0;
      uVar7 = DAT_14c8464e8;
      uVar6 = DAT_14c8464e0;
      local_78 = DAT_14c8464f0;
      local_88 = DAT_14c8464e0;
      uStack_80 = DAT_14c8464e8;
      lVar18 = *param_1;
      lVar22 = lVar23 * 0x13c10;
      *(undefined1 *)(lVar18 + 0x13870 + lVar22) = 0;
      *(undefined8 *)(lVar18 + 0x13874 + lVar22) = 0;
      *(undefined1 **)(lVar18 + 0x1387c + lVar22) = &DAT_100000001;
      *(undefined8 *)(lVar18 + 0x13884 + lVar22) = 0xffffffffffffffff;
      *(undefined4 *)(lVar18 + 0x1388c + lVar22) = 0;
      *(undefined8 *)(lVar18 + 0x138a0 + lVar22) = uVar8;
      local_88._0_4_ = (undefined4)uVar6;
      local_88._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_80._0_4_ = (undefined4)uVar7;
      uStack_80._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar1 = (undefined4 *)(lVar18 + 0x13890 + lVar22);
      *puVar1 = (undefined4)local_88;
      puVar1[1] = local_88._4_4_;
      puVar1[2] = (undefined4)uStack_80;
      puVar1[3] = uStack_80._4_4_;
      puVar2 = (undefined8 *)(lVar18 + 0x138a8 + lVar22);
      *puVar2 = 0x13f800000;
      puVar2[1] = &DAT_100000001;
      *(undefined4 *)(lVar18 + 0x138b8 + lVar22) = 1;
      puVar2 = (undefined8 *)(lVar18 + 0x138bc + lVar22);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(lVar18 + 0x138cc + lVar22) = 0;
      lVar14 = *(longlong *)(lVar18 + 0x138d0 + lVar22);
      *(undefined8 *)(lVar18 + 0x138d0 + lVar22) = 0;
      local_88 = uVar6;
      uStack_80 = uVar7;
      if (lVar14 != 0) {
        LOCK();
        puVar20 = (uint *)(lVar14 + 8);
        uVar3 = *puVar20;
        *puVar20 = *puVar20 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar20 = (uint *)(lVar14 + 8);
          LOCK();
          uVar3 = *puVar20;
          *puVar20 = *puVar20 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar14 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar14;
            plVar13 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar24 = plVar13 != DAT_14ca843c0;
                plVar12 = plVar11;
                if (bVar24) {
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar24);
            }
            else {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar24 = plVar12 != DAT_14ca843c8;
                plVar13 = plVar11;
                if (bVar24) {
                  plVar12 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar24);
            }
          }
        }
      }
      *(undefined8 *)(lVar18 + lVar22 + 0x138d8) = 0;
      *(undefined8 *)(lVar18 + lVar22 + 0x138e0) = 0;
      lVar23 = lVar23 + 1;
      iVar10 = (int)param_1[1];
    } while (lVar23 < iVar10);
  }
  iVar9 = DAT_14ca4d248;
  lVar23 = DAT_14ca4d240;
  iVar15 = DAT_14ca4d248;
  if (iVar10 != 0) {
    if (*(longlong *)(*param_1 + 8) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x40);
    }
    lVar14 = (longlong)DAT_14ca4d248;
    if (lVar14 != 0) {
      bVar24 = true;
      if ((*(longlong *)(DAT_14ca4d240 + 0x70) != 0) &&
         (*(longlong *)(DAT_14ca4d240 + 0x70) != lVar18)) {
        bVar24 = *(uint *)(DAT_14ca4d240 + 0x78) < DAT_14c7590b0;
      }
      local_90 = DAT_14ca4d240 + 0xf8;
      iVar15 = 0;
      iVar10 = 0;
LAB_141780636:
      do {
        if (iVar10 + 1 < iVar9) {
          lVar19 = (longlong)iVar10;
          lVar22 = lVar19 + 2;
          puVar20 = (uint *)(lVar19 * 0x80 + local_90);
          bVar5 = true;
          lVar17 = -1;
          do {
            iVar16 = (int)lVar17;
            if ((*(longlong *)(puVar20 + -2) == 0) || (*(longlong *)(puVar20 + -2) == lVar18)) {
              if (!bVar24) {
                iVar21 = iVar10 - iVar16;
                iVar16 = -iVar16;
                goto LAB_1417806e0;
              }
            }
            else if ((bool)(*puVar20 < DAT_14c7590b0 ^ bVar24)) {
              iVar21 = iVar10 - iVar16;
              break;
            }
            bVar5 = lVar22 < lVar14;
            lVar17 = lVar17 + -1;
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 0x20;
            iVar21 = iVar9;
          } while (lVar19 - lVar14 != lVar17);
        }
        else {
          bVar5 = false;
          iVar21 = iVar10 + 1;
        }
        iVar16 = iVar21 - iVar10;
        if (bVar24) {
          FUN_1472ff70d((longlong)iVar10 * 0x80 + lVar23,iVar16);
          bVar24 = false;
          iVar10 = iVar21;
          if (!bVar5) break;
          goto LAB_141780636;
        }
LAB_1417806e0:
        if (iVar15 != iVar10) {
          memmove((void *)((longlong)iVar15 * 0x80 + lVar23),
                  (void *)((longlong)iVar10 * 0x80 + lVar23),(longlong)iVar16 << 7);
        }
        iVar15 = iVar15 + iVar16;
        bVar24 = true;
        iVar10 = iVar21;
      } while (bVar5);
    }
  }
  DAT_14ca4d248 = iVar15;
  DAT_14ca4d320 = 0;
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141780738 FUN_141780738 body=562 status=ok
// SIG undefined FUN_141780738(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141780738(ushort *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56d18) && (FUN_144b3d300(&DAT_14ca56d18), DAT_14ca56d18 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14ca56d10 = 0;
    }
    else {
      DAT_14ca56d10 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14ca56d18);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar1 + 0xc60);
  if (DAT_14ca56d10 == 0) {
LAB_141780932:
    if (iVar3 == 0x40000002) goto LAB_1417807be;
  }
  else {
    if (iVar3 == 0x40000002) goto LAB_1417807be;
    if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar3 = *(int *)(lVar1 + 0xc60);
      goto LAB_141780932;
    }
  }
  if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
LAB_1417807be:
  if ((2 < (int)(&DAT_14ca814b8)[uVar5 * 0xf]) || (cVar2 = FUN_143065dd2(uVar5), cVar2 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca56d38) && (FUN_144b3d300(&DAT_14ca56d38), DAT_14ca56d38 == -1)) {
      FUN_140056680(&DAT_14ca56d20,L"r.Shadow.DetectVertexShaderLayerAtRuntime");
      _DAT_14ca56d30 = 0;
      atexit((_func_5014 *)&LAB_143065f96);
      _Init_thread_footer(&DAT_14ca56d38);
    }
    if ((*(byte *)((longlong)&DAT_14ca814d0 + uVar5 * 0x3c + 7) & 4) == 0) {
      FUN_144a847a6(&DAT_14ca56d20,uVar5);
    }
    if ((char)*(undefined8 *)(param_1 + 0x1c) < '\0' &&
        ((uint)*(undefined8 *)(param_1 + 0x1c) & 0x2000202) != 0x200) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                      (*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) == 0);
    }
  }
  return 0;
}



// FUNCTION 14178096a FUN_14178096a body=525 status=ok
// SIG undefined FUN_14178096a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14178096a(ushort *param_1)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = *param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56d98) && (FUN_144b3d300(&DAT_14ca56d98), DAT_14ca56d98 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14ca56d90 = 0;
    }
    else {
      DAT_14ca56d90 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14ca56d98);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar2 + 0xc60);
  if (DAT_14ca56d90 == 0) {
LAB_141780b3f:
    if (iVar3 == 0x40000002) goto LAB_1417809ee;
  }
  else {
    if (iVar3 == 0x40000002) goto LAB_1417809ee;
    if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar3 = *(int *)(lVar2 + 0xc60);
      goto LAB_141780b3f;
    }
  }
  if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
LAB_1417809ee:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56db8) && (FUN_144b3d300(&DAT_14ca56db8), DAT_14ca56db8 == -1)) {
    FUN_140056680(&DAT_14ca56da0,L"r.Shadow.DetectVertexShaderLayerAtRuntime");
    _DAT_14ca56db0 = 0;
    atexit((_func_5014 *)&LAB_143065fb8);
    _Init_thread_footer(&DAT_14ca56db8);
  }
  if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)uVar1 * 0x3c + 7) & 4) == 0) {
    FUN_144a847a6(&DAT_14ca56da0,(ulonglong)uVar1);
  }
  if ((char)*(undefined8 *)(param_1 + 0x1c) < '\0' &&
      ((uint)*(undefined8 *)(param_1 + 0x1c) & 0x2000202) != 0x200) {
    uVar4 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                     (*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) == 0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 141780b78 FUN_141780b78 body=570 status=ok
// SIG undefined FUN_141780b78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141780b78(ushort *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56df8) && (FUN_144b3d300(&DAT_14ca56df8), DAT_14ca56df8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14ca56df0 = 0;
    }
    else {
      DAT_14ca56df0 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14ca56df8);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar1 + 0xc60);
  if (DAT_14ca56df0 == 0) {
LAB_141780d7a:
    if (iVar3 == 0x40000002) goto LAB_141780bfe;
  }
  else {
    if (iVar3 == 0x40000002) goto LAB_141780bfe;
    if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar3 = *(int *)(lVar1 + 0xc60);
      goto LAB_141780d7a;
    }
  }
  if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
LAB_141780bfe:
  if ((2 < (int)(&DAT_14ca814b8)[uVar5 * 0xf]) || (cVar2 = FUN_143065fca(uVar5), cVar2 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca56e18) && (FUN_144b3d300(&DAT_14ca56e18), DAT_14ca56e18 == -1)) {
      FUN_140056680(&DAT_14ca56e00,L"r.Shadow.DetectVertexShaderLayerAtRuntime");
      _DAT_14ca56e10 = 0;
      atexit((_func_5014 *)&LAB_14306607e);
      _Init_thread_footer(&DAT_14ca56e18);
    }
    if ((((*(byte *)((longlong)&DAT_14ca814d0 + uVar5 * 0x3c + 7) & 4) != 0) ||
        (cVar2 = FUN_144a847a6(&DAT_14ca56e00,uVar5), cVar2 != '\0')) &&
       ((char)*(undefined8 *)(param_1 + 0x1c) < '\0' &&
        ((uint)*(undefined8 *)(param_1 + 0x1c) & 0x2000202) != 0x200)) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                      (*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) == 0);
    }
  }
  return 0;
}



// FUNCTION 141780db2 FUN_141780db2 body=557 status=ok
// SIG undefined FUN_141780db2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_141780db2(ushort *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56eb8) && (FUN_144b3d300(&DAT_14ca56eb8), DAT_14ca56eb8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14ca56eb0 = 0;
    }
    else {
      DAT_14ca56eb0 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14ca56eb8);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar1 + 0xc60);
  if (DAT_14ca56eb0 == 0) {
LAB_141780fa7:
    if (iVar3 == 0x40000002) goto LAB_141780e38;
  }
  else {
    if (iVar3 == 0x40000002) goto LAB_141780e38;
    if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar3 = *(int *)(lVar1 + 0xc60);
      goto LAB_141780fa7;
    }
  }
  if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
LAB_141780e38:
  if ((2 < (int)(&DAT_14ca814b8)[uVar5 * 0xf]) || (cVar2 = FUN_143065dd2(uVar5), cVar2 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca56ed8) && (FUN_144b3d300(&DAT_14ca56ed8), DAT_14ca56ed8 == -1)) {
      FUN_140056680(&DAT_14ca56ec0,L"r.Shadow.DetectVertexShaderLayerAtRuntime");
      _DAT_14ca56ed0 = 0;
      atexit((_func_5014 *)&LAB_1430660b1);
      _Init_thread_footer(&DAT_14ca56ed8);
    }
    if ((*(byte *)((longlong)&DAT_14ca814d0 + uVar5 * 0x3c + 7) & 4) == 0) {
      FUN_144a847a6(&DAT_14ca56ec0,uVar5);
    }
    if ((*(ulonglong *)(param_1 + 0x1c) & 2) != 0) {
      if (-1 < (char)*(ulonglong *)(param_1 + 0x1c)) {
        return false;
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) & 0x20) == 0) {
        return false;
      }
      return (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 8 & 1) == 0;
    }
  }
  return false;
}



// FUNCTION 141780fe0 FUN_141780fe0 body=518 status=ok
// SIG undefined FUN_141780fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_141780fe0(ushort *param_1)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56f18) && (FUN_144b3d300(&DAT_14ca56f18), DAT_14ca56f18 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14ca56f10 = 0;
    }
    else {
      DAT_14ca56f10 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14ca56f18);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar2 + 0xc60);
  if (DAT_14ca56f10 == 0) {
LAB_1417811ae:
    if (iVar3 == 0x40000002) goto LAB_141781064;
  }
  else {
    if (iVar3 == 0x40000002) goto LAB_141781064;
    if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar3 = *(int *)(lVar2 + 0xc60);
      goto LAB_1417811ae;
    }
  }
  if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
LAB_141781064:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56f38) && (FUN_144b3d300(&DAT_14ca56f38), DAT_14ca56f38 == -1)) {
    FUN_140056680(&DAT_14ca56f20,L"r.Shadow.DetectVertexShaderLayerAtRuntime");
    _DAT_14ca56f30 = 0;
    atexit((_func_5014 *)&LAB_1430660c2);
    _Init_thread_footer(&DAT_14ca56f38);
  }
  if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)uVar1 * 0x3c + 7) & 4) == 0) {
    FUN_144a847a6(&DAT_14ca56f20,(ulonglong)uVar1);
  }
  bVar5 = false;
  if ((((*(ulonglong *)(param_1 + 0x1c) & 2) != 0) && ((char)*(ulonglong *)(param_1 + 0x1c) < '\0'))
     && ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) & 0x20) != 0)) {
    bVar5 = (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 8 & 1) == 0;
  }
  return bVar5;
}



// FUNCTION 1417811e6 FUN_1417811e6 body=565 status=ok
// SIG undefined FUN_1417811e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1417811e6(ushort *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56f78) && (FUN_144b3d300(&DAT_14ca56f78), DAT_14ca56f78 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14ca56f70 = 0;
    }
    else {
      DAT_14ca56f70 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14ca56f78);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar1 + 0xc60);
  if (DAT_14ca56f70 == 0) {
LAB_1417813e3:
    if (iVar3 == 0x40000002) goto LAB_14178126c;
  }
  else {
    if (iVar3 == 0x40000002) goto LAB_14178126c;
    if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar3 = *(int *)(lVar1 + 0xc60);
      goto LAB_1417813e3;
    }
  }
  if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
LAB_14178126c:
  if ((2 < (int)(&DAT_14ca814b8)[uVar5 * 0xf]) || (cVar2 = FUN_143065fca(uVar5), cVar2 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca56f98) && (FUN_144b3d300(&DAT_14ca56f98), DAT_14ca56f98 == -1)) {
      FUN_140056680(&DAT_14ca56f80,L"r.Shadow.DetectVertexShaderLayerAtRuntime");
      _DAT_14ca56f90 = 0;
      atexit((_func_5014 *)&LAB_1430660d3);
      _Init_thread_footer(&DAT_14ca56f98);
    }
    if ((((*(byte *)((longlong)&DAT_14ca814d0 + uVar5 * 0x3c + 7) & 4) != 0) ||
        (cVar2 = FUN_144a847a6(&DAT_14ca56f80,uVar5), cVar2 != '\0')) &&
       ((*(ulonglong *)(param_1 + 0x1c) & 2) != 0)) {
      if (-1 < (char)*(ulonglong *)(param_1 + 0x1c)) {
        return false;
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) & 0x20) == 0) {
        return false;
      }
      return (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 8 & 1) == 0;
    }
  }
  return false;
}



// FUNCTION 14178141c FUN_14178141c body=544 status=ok
// SIG undefined FUN_14178141c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14178141c(ushort *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56fd8) && (FUN_144b3d300(&DAT_14ca56fd8), DAT_14ca56fd8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14ca56fd0 = 0;
    }
    else {
      DAT_14ca56fd0 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14ca56fd8);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar1 + 0xc60);
  if (DAT_14ca56fd0 == 0) {
LAB_141781604:
    if (iVar3 == 0x40000002) goto LAB_1417814a2;
  }
  else {
    if (iVar3 == 0x40000002) goto LAB_1417814a2;
    if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar3 = *(int *)(lVar1 + 0xc60);
      goto LAB_141781604;
    }
  }
  if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
LAB_1417814a2:
  if (2 < (int)(&DAT_14ca814b8)[uVar5 * 0xf]) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca56ff8) && (FUN_144b3d300(&DAT_14ca56ff8), DAT_14ca56ff8 == -1)) {
      FUN_140056680(&DAT_14ca56fe0,L"r.Shadow.DetectVertexShaderLayerAtRuntime");
      _DAT_14ca56ff0 = 0;
      atexit((_func_5014 *)&LAB_1430660e4);
      _Init_thread_footer(&DAT_14ca56ff8);
    }
    if ((*(byte *)((longlong)&DAT_14ca814d0 + uVar5 * 0x3c + 7) & 4) == 0) {
      FUN_144a847a6(&DAT_14ca56fe0,uVar5);
    }
    cVar2 = FUN_1407db659(uVar5);
    if ((cVar2 != '\0') && ((*(ulonglong *)(param_1 + 0x1c) & 2) != 0)) {
      if (-1 < (char)*(ulonglong *)(param_1 + 0x1c)) {
        return false;
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) & 0x20) == 0) {
        return false;
      }
      return (*(uint *)(*(longlong *)(param_1 + 0x24) + 0x28) >> 8 & 1) == 0;
    }
  }
  return false;
}



// FUNCTION 14178163c FUN_14178163c body=89 status=ok
// SIG undefined FUN_14178163c(void)

undefined8 FUN_14178163c(ushort *param_1)

{
  char cVar1;
  
  if (((2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]) &&
      (cVar1 = FUN_1407db659(), cVar1 != '\0')) &&
     ((char)*(undefined8 *)(param_1 + 0x1c) < '\0' &&
      ((uint)*(undefined8 *)(param_1 + 0x1c) & 0x2000202) != 0x200)) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                    (*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) == 0);
  }
  return 0;
}



// FUNCTION 141781695 FUN_141781695 body=120 status=ok
// SIG undefined FUN_141781695(void)

undefined8 FUN_141781695(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1447e0190();
  if (((cVar1 == '\0') ||
      (((DAT_14ca84e0d == '\0' && ((DAT_14c842750 & 1) != 0)) || (*(int *)(DAT_14ca4f7f0 + 4) == 0))
      )) || ((((-1 < (char)*(uint *)(param_1 + 0x990) || ((*(uint *)(param_1 + 0x990) & 0x10) == 0))
              || (*(int *)(param_1 + 0x944) < 0)) && (*(int *)(DAT_14ca4f808 + 4) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)(param_2 & 0xffff) * 0x3c >> 8),
                     (&DAT_14ca814b8)[(ulonglong)(param_2 & 0xffff) * 0xf] != 1);
  }
  return uVar2;
}



// FUNCTION 14178170e FUN_14178170e body=40 status=ok
// SIG undefined FUN_14178170e(void)

undefined8 FUN_14178170e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141781736 FUN_141781736 body=764 status=ok
// SIG undefined FUN_141781736(void)

void FUN_141781736(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_14178192c;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14178192c:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141781a34 FUN_141781a34 body=201 status=ok
// SIG undefined FUN_141781a34(void)

undefined8 * FUN_141781a34(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141781afe FUN_141781afe body=430 status=ok
// SIG undefined FUN_141781afe(void)

/* WARNING: Removing unreachable block (ram,0x000141781c97) */

undefined2 * FUN_141781afe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  iVar5 = *(int *)(param_1 + 3);
  if (iVar5 <= param_2) {
    do {
      if (param_2 == 0) {
        *(uint *)(param_1 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
          FUN_1447a1bd6(plVar1,iVar5);
        }
        lVar3 = param_1[2];
        lVar6 = (longlong)iVar5 * 0x10;
        puVar2 = (undefined8 *)(lVar3 + lVar6);
        *(undefined8 *)(lVar3 + lVar6) = 0;
        iVar5 = *(int *)(param_1 + 1);
        local_60 = (void *)*param_1;
        *(int *)(lVar3 + 8 + lVar6) = iVar5;
        if ((longlong)iVar5 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          local_68 = puVar2;
          FUN_1446dd670(puVar2,iVar5,0);
          memcpy((void *)*local_68,local_60,(longlong)iVar5 * 2);
        }
      }
      else {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 1) != 0) {
          puVar4 = (undefined2 *)*param_1;
        }
        FUN_140002266(&local_58,L"%s%d",puVar4,iVar5);
        iVar5 = *(int *)(param_1 + 3);
        *(uint *)(param_1 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
          FUN_1447a1bd6(plVar1,iVar5);
        }
        lVar3 = *plVar1;
        lVar6 = (longlong)iVar5 * 0x10;
        *(undefined8 *)(lVar3 + lVar6) = 0;
        *(undefined8 *)(lVar3 + lVar6) = local_58;
        local_58 = 0;
        *(undefined4 *)(lVar3 + 8 + lVar6) = (undefined4)local_50;
        *(undefined4 *)(lVar3 + 0xc + lVar6) = local_50._4_4_;
        local_50 = 0;
      }
      iVar5 = *(int *)(param_1 + 3);
    } while (iVar5 <= param_2);
  }
  if (*(int *)(*plVar1 + 8 + (longlong)param_2 * 0x10) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(*plVar1 + (longlong)param_2 * 0x10);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141781cae FUN_141781cae body=321 status=ok
// SIG undefined FUN_141781cae(void)

void FUN_141781cae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  uint local_68;
  int local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 8)) {
    if (*(char *)(param_1 + 0x200) == '\x01') {
      if (param_3[2] == 0) {
        local_40 = 0;
      }
      else {
        local_40 = *(undefined8 *)(param_3[2] + 0x10);
      }
      local_58 = *(undefined4 *)(param_1 + 0x204);
      if (*param_3 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = *(undefined8 *)(*param_3 + 0x10);
      }
      lStack_30 = param_3[4];
      local_68 = 0;
      local_60 = *(int *)(param_1 + 8);
      local_50 = param_2;
      FUN_1400835a0(param_1 + 0x10,param_1,param_1 + 0x140);
    }
    else {
      local_38 = 0;
      lStack_30 = 0;
      if (param_3[2] == 0) {
        local_40 = 0;
      }
      else {
        local_40 = *(undefined8 *)(param_3[2] + 0x10);
      }
      local_28 = *(undefined1 *)(param_1 + 0x13c);
      uVar1 = FUN_142cc5b00(*(undefined2 *)(param_1 + 0x18));
      local_58 = *(undefined4 *)(param_1 + 8);
      local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x204));
      local_60 = 0;
      local_68 = local_68 & 0xffffff00;
      local_48 = param_2;
      FUN_142de5cd1(param_1,param_1 + 0x140,&local_40,uVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141781df0 FUN_141781df0 body=404 status=ok
// SIG undefined FUN_141781df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141781df0(longlong param_1,int param_2)

{
  size_t _Size;
  uint uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  FUN_1447609e4(param_1 + 0x170);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x158);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(param_1 + 0x168);
    if ((longlong)(int)uVar1 != 0) {
      _Src = *(void **)(param_1 + 0x160);
      _Size = (longlong)(int)uVar1 * 8;
      lVar5 = 0;
      do {
        FUN_140152f5c(*(undefined8 *)((longlong)_Src + lVar5),lVar6);
        lVar5 = lVar5 + 8;
      } while (_Size - lVar5 != 0);
      LOCK();
      bVar7 = DAT_14ca8c140 == '\0';
      if (bVar7) {
        DAT_14ca8c140 = '\x01';
      }
      UNLOCK();
      if (!bVar7) {
        FUN_1447d2058(&DAT_14ca8c140);
      }
      iVar2 = DAT_14ca8c180;
      lVar6 = (longlong)DAT_14ca8c180;
      iVar3 = DAT_14ca8c180 + uVar1;
      uVar4 = DAT_14ca8c184 - DAT_14ca8c180;
      DAT_14ca8c180 = iVar3;
      if (uVar4 < uVar1) {
        FUN_1400f7990(&DAT_14ca8c178,iVar2);
      }
      memcpy((void *)(lVar6 * 8 + _DAT_14ca8c178),_Src,_Size);
      LOCK();
      bVar7 = DAT_14ca8c140 == '\x01';
      if (bVar7) {
        DAT_14ca8c140 = '\0';
      }
      UNLOCK();
      if (!bVar7) {
        FUN_14008cdb0(&DAT_14ca8c140);
      }
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
    if (*(int *)(param_1 + 0x16c) < 0) {
      FUN_145ccb7b2(param_1 + 0x160,0);
    }
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_14476085a(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141781f84 FUN_141781f84 body=271 status=ok
// SIG undefined FUN_141781f84(void)

void FUN_141781f84(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x430;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x430)) {
      uVar5 = uVar4 / 0x430 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x430,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141782094 FUN_141782094 body=26 status=ok
// SIG undefined FUN_141782094(void)

void FUN_141782094(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400567b2(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
    return;
  }
  return;
}



// FUNCTION 1417820ae FUN_1417820ae body=164 status=ok
// SIG undefined FUN_1417820ae(void)

void FUN_1417820ae(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_11 = 1;
  FUN_1447439e4();
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141782154 FUN_141782154 body=29 status=ok
// SIG undefined FUN_141782154(void)

undefined8 FUN_141782154(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141782171 FUN_141782171 body=64 status=ok
// SIG undefined FUN_141782171(void)

void FUN_141782171(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x90;
    do {
      FUN_14002d3bc(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1417821b2 FUN_1417821b2 body=257 status=ok
// SIG undefined FUN_1417821b2(void)

void FUN_1417821b2(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar1 < 3) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
    _Src = *(void **)((longlong)param_1 + 0x10);
joined_r0x00014178223d:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar2 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x1c) < 3) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
    }
    else {
      uVar2 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0x7fffffff;
      uVar2 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x10);
    }
    else {
      *(uint *)((longlong)param_1 + 0x1c) = uVar2;
      _Src = *(void **)((longlong)param_1 + 0x10);
      if (uVar2 < 3) goto joined_r0x00014178223d;
    }
    if (_Src == (void *)0x0) {
      FUN_1400567b2((longlong)param_1 + 0x10,0,uVar2,8);
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1400567b2((longlong)param_1 + 0x10,param_2,uVar2,8);
  return;
}



// FUNCTION 1417822b4 FUN_1417822b4 body=646 status=ok
// SIG undefined FUN_1417822b4(void)

longlong FUN_1417822b4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar1 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1b0);
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar1 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar1 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  FUN_1400200e4(param_1 + 0x198);
  FUN_14002d3bc(param_1 + 0x178);
  FUN_1402151b2(param_1 + 0x168);
  lVar2 = *(longlong *)(param_1 + 0x158);
  if (lVar2 != 0) {
    piVar3 = (int *)((lVar2 + -8) - (ulonglong)*(uint *)(lVar2 + -8));
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        lVar2 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar2 = FUN_145bdc178();
        }
        FUN_140028df4(lVar2,piVar3);
      }
      else {
        FUN_144705e74(piVar3);
      }
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar1 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar1 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  FUN_14002d3bc(param_1 + 0x130);
  FUN_14002d3bc(param_1 + 0x120);
  FUN_14002d3bc(param_1 + 0x100);
  FUN_14002d3bc(param_1 + 0xf0);
  FUN_14002d3bc(param_1 + 0xe0);
  FUN_14002d3bc(param_1 + 0xd0);
  FUN_14002d3bc(param_1 + 0xc0);
  FUN_14002d3bc(param_1 + 0xb0);
  FUN_14002d3bc(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    piVar3 = (int *)((lVar2 + -8) - (ulonglong)*(uint *)(lVar2 + -8));
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        lVar2 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar2 = FUN_145bdc178();
        }
        FUN_140028df4(lVar2,piVar3);
      }
      else {
        FUN_144705e74(piVar3);
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    piVar3 = (int *)((lVar2 + -8) - (ulonglong)*(uint *)(lVar2 + -8));
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        lVar2 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar2 = FUN_145bdc178();
        }
        FUN_140028df4(lVar2,piVar3);
      }
      else {
        FUN_144705e74(piVar3);
      }
    }
  }
  FUN_14002d3bc(param_1 + 0x60);
  FUN_14002d3bc(param_1 + 0x50);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178253a FUN_14178253a body=893 status=ok
// SIG undefined FUN_14178253a(void)

void FUN_14178253a(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  ulonglong *param_5,undefined8 param_6)

{
  ulonglong uVar1;
  undefined2 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  code *pcVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  uint local_168;
  int local_160;
  undefined8 local_158;
  undefined8 *local_150;
  uint local_148;
  undefined8 local_140;
  uint local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0 [8];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  (**(code **)(*param_3 + 0x288))(param_3,&local_d0);
  if (((ushort)local_d0 >> 10 & 1) == 0) goto LAB_141782594;
  uVar1 = *param_5;
  pcVar7 = *(code **)(*param_3 + 0x38);
  plVar8 = param_3;
  if (pcVar7 == FUN_144765e18) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar8 + 0x420);
      pcVar9 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x420);
      pcVar9 = (code *)&LAB_14497e108;
    }
    if (pcVar7 != pcVar9) goto LAB_141782884;
  }
  else {
LAB_141782884:
    (*pcVar7)(plVar8);
  }
  lVar6 = *param_3;
  if (*(code **)(lVar6 + 0x100) == (code *)&LAB_144b25520) {
    uVar5 = (uint)((*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6);
  }
  else {
    uVar5 = (**(code **)(lVar6 + 0x100))(param_3);
    lVar6 = *param_3;
  }
  pcVar7 = *(code **)(lVar6 + 0x38);
  plVar8 = param_3;
  if (pcVar7 == FUN_144765e18) {
    plVar8 = (longlong *)param_3[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar8 + 0x420);
      if (pcVar7 != (code *)&LAB_144b24e8a) goto LAB_14178289d;
      bVar3 = *(byte *)(plVar8 + 0x30);
    }
    else {
      pcVar7 = *(code **)(*plVar8 + 0x420);
      if (pcVar7 != (code *)&LAB_14497e108) goto LAB_14178289d;
      bVar3 = *(byte *)(plVar8 + 0x2a);
    }
    bVar3 = (bVar3 & 0x10) >> 4;
  }
  else {
LAB_14178289d:
    bVar3 = (*pcVar7)(plVar8);
  }
  iVar10 = (((uint)uVar1 >> 0x10 & 1) != 0) + 1;
  if (bVar3 != 0) {
    iVar10 = 0;
  }
  if ((uVar1 & 0x20000) != 0) {
    iVar10 = 0;
  }
  local_150 = &local_118;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_148 = local_148 & 0xffffff00;
  local_158 = &local_128;
  local_168 = local_168 & 0xffffff00;
  local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffffffffff00);
  local_160 = 0;
  local_178 = (undefined8 *)CONCAT71(local_178._1_7_,1);
  cVar4 = FUN_1403113c0(param_3,*param_4,0,*(undefined4 *)(param_1 + 0x20));
  if (cVar4 != '\0') {
    local_12c = 2 - (uVar5 & 0xff);
    local_c8 = 0;
    local_d0 = 0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_c0[2] = 0;
    local_c0[3] = 0;
    local_c0[4] = 0;
    local_c0[5] = 0;
    local_c0[6] = 0;
    local_c0[7] = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_140a1799a(param_2,&local_d0,0);
    uVar2 = DAT_14ca85550;
    local_78 = *(undefined8 *)(param_2 + 0x38);
    local_80 = 0xb;
    bVar11 = ((uint)local_78 >> 0xc & 1) == 0;
    uStack_70 = CONCAT62(0x210001,CONCAT11(bVar11,1));
    uStack_70._0_4_ = CONCAT13(bVar11,(undefined3)uStack_70);
    uStack_70 = CONCAT44(0x21,(undefined4)uStack_70);
    cVar4 = FUN_1400dade3(DAT_14ca85550);
    if ((cVar4 != '\0') || (cVar4 = FUN_1401519b7(uVar2), cVar4 != '\0')) {
      *(undefined1 *)((longlong)&local_d0 + (local_d0 & 0xffffffff) + 4) = 0x1a;
      local_c0[local_d0 & 0xffffffff] = 9;
      local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
    }
    bVar3 = FUN_14492b351(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2));
    uStack_70 = CONCAT44((uint)bVar3 * 0x10 + 1,(undefined4)uStack_70);
    local_148 = *(uint *)(param_1 + 8);
    local_140 = param_6;
    local_158 = (undefined8 *)(CONCAT44(local_158._4_4_,(int)*param_5) & 0xffffffff0000003f);
    local_168 = local_12c;
    local_170 = &local_128;
    local_150 = (undefined8 *)CONCAT71(local_150._1_7_,1);
    local_178 = &local_d0;
    local_160 = iVar10;
    FUN_140287f14(*(undefined4 *)(param_1 + 0x20),param_4,param_3,param_1 + 0x40);
  }
LAB_141782594:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417828b8 FUN_1417828b8 body=1483 status=ok
// SIG undefined FUN_1417828b8(void)

void FUN_1417828b8(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,undefined8 param_6)

{
  uint uVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar9;
  code *pcVar10;
  byte bVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  uint local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  uint local_50;
  ulonglong local_48;
  code *pcVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar13 = param_4;
  (**(code **)(*param_3 + 0x288))(param_3,&local_b8);
  if (((local_b8 & 0x400) == 0) ||
     (cVar4 = FUN_14492b351(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2)
                           ), cVar4 == '\0')) goto LAB_141782907;
  uVar14 = *param_5;
  pcVar8 = *(code **)(*param_3 + 0x38);
  plVar9 = param_3;
  if (pcVar8 == FUN_144765e18) {
    plVar9 = (longlong *)param_3[9];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)param_3[8];
      pcVar8 = *(code **)(*plVar9 + 0x420);
      pcVar10 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar8 = *(code **)(*plVar9 + 0x420);
      pcVar10 = (code *)&LAB_14497e108;
    }
    if (pcVar8 != pcVar10) goto LAB_141782e44;
  }
  else {
LAB_141782e44:
    (*pcVar8)(plVar9);
  }
  lVar7 = *param_3;
  if (*(code **)(lVar7 + 0x100) == (code *)&LAB_144b25520) {
    bVar11 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar11 = (**(code **)(lVar7 + 0x100))(param_3);
    lVar7 = *param_3;
  }
  pcVar8 = *(code **)(lVar7 + 0x38);
  if (pcVar8 == FUN_144765e18) {
    plVar9 = (longlong *)param_3[9];
    if (plVar9 == (longlong *)0x0) {
      pcVar8 = *(code **)(*(longlong *)param_3[8] + 0x420);
      if (pcVar8 != (code *)&LAB_144b24e8a) goto LAB_141782e5d;
      bVar5 = *(byte *)((longlong *)param_3[8] + 0x30);
    }
    else {
      pcVar8 = *(code **)(*plVar9 + 0x420);
      if (pcVar8 != (code *)&LAB_14497e108) goto LAB_141782e5d;
      bVar5 = *(byte *)(plVar9 + 0x2a);
    }
    bVar5 = (bVar5 & 0x10) >> 4;
  }
  else {
LAB_141782e5d:
    bVar5 = (*pcVar8)();
  }
  iVar16 = (((uint)uVar14 >> 0x10 & 1) != 0) + 1;
  if (bVar5 != 0) {
    iVar16 = 0;
  }
  if ((uVar14 & 0x20000) != 0) {
    iVar16 = 0;
  }
  uVar1 = *(uint *)(*param_4 + 0x28);
  pcVar8 = *(code **)(*param_3 + 0x270);
  plVar9 = param_3;
  if (pcVar8 == (code *)&LAB_1447f82f4) {
    plVar9 = (longlong *)param_3[9];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)param_3[8];
      pcVar8 = *(code **)(*plVar9 + 0x408);
      if (pcVar8 != (code *)&LAB_14470b702) goto LAB_141782e67;
      bVar5 = *(byte *)((longlong)plVar9 + 0x129);
      if (bVar5 == 1) {
        bVar5 = ~*(byte *)((longlong)plVar9 + 0x1d6) & 1;
      }
      uVar6 = (uint)bVar5;
    }
    else {
      pcVar8 = *(code **)(*plVar9 + 0x408);
      if (pcVar8 != (code *)&LAB_14497e176) goto LAB_141782e67;
      uVar6 = (uint)*(byte *)(plVar9 + 0x2b);
    }
  }
  else {
LAB_141782e67:
    uVar6 = (*pcVar8)(plVar9);
  }
  iVar12 = 2 - (uint)bVar11;
  uVar2 = (undefined3)(uVar1 >> 8);
  if ((((uVar1 & 0x20) != 0) && (uVar6 == 0)) &&
     ((param_3[2] == 0 || ((*(byte *)(*(longlong *)(param_3[2] + 0x28) + 0x246) & 8) == 0)))) {
    cVar4 = FUN_1447e4184(param_3,0,CONCAT31((int3)((uint)iVar12 >> 8),-1 < (short)uVar1));
    if (cVar4 != '\0') {
      uVar3 = CONCAT31(uVar2,DAT_14cb0cc00);
      FUN_14003fbd6();
      lVar7 = (**(code **)(*DAT_14caea080 + 0x350))
                        (DAT_14caea080,*(undefined4 *)(param_1 + 0x20),uVar3);
      local_160 = &local_f8;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      if (*(longlong *)(lVar7 + 0x10) == 0) {
        uVar15 = 0;
      }
      else {
        uVar14 = CONCAT71((int7)((ulonglong)plVar13 >> 8),
                          *(undefined1 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x28) + 0x246)
                         ) & 0xffffffffffffff40;
        uVar15 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 >> 6);
      }
      local_158 = &local_118;
      local_168 = &local_108;
      cVar4 = FUN_1400cee52(lVar7,*param_4,*(undefined4 *)(param_1 + 0x20),uVar15);
      if (cVar4 != '\0') {
        local_b0 = 0;
        local_b8 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_50 = (uint)*(ushort *)(param_2 + 0x24);
        local_60 = *(undefined8 *)(param_2 + 0x38);
        local_68 = 0xb;
        local_58 = 1;
        local_56 = 1;
        local_54 = 0x22;
        local_57 = ((uint)local_60 >> 0xc & 1) == 0;
        local_150 = (uint)*param_5 & 0x3f;
        local_128 = *(undefined4 *)(param_1 + 8);
        local_120 = param_6;
        local_130 = 1;
        local_138 = 0;
        local_140 = 0;
        local_158 = (undefined8 *)CONCAT44(local_158._4_4_,iVar16);
        local_160 = (undefined8 *)CONCAT44(local_160._4_4_,iVar12);
        local_148 = 1;
        local_168 = &local_108;
        local_55 = local_57;
        FUN_140b09aec(param_4,lVar7,param_1 + 0x40);
      }
      goto LAB_141782907;
    }
  }
  cVar4 = FUN_1447e4184(param_3,0,-1 < (short)uVar1);
  if ((cVar4 != '\0') &&
     ((param_3[2] == 0 || ((*(byte *)(*(longlong *)(param_3[2] + 0x28) + 0x246) & 8) == 0)))) {
    uVar3 = CONCAT31(uVar2,DAT_14cb0cc00);
    FUN_14003fbd6();
    param_3 = (longlong *)
              (**(code **)(*DAT_14caea080 + 0x350))
                        (DAT_14caea080,*(undefined4 *)(param_1 + 0x20),uVar3);
  }
  local_160 = &local_f8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  if (param_3[2] == 0) {
    uVar15 = 0;
  }
  else {
    uVar14 = CONCAT71((int7)((ulonglong)plVar13 >> 8),
                      *(undefined1 *)(*(longlong *)(param_3[2] + 0x28) + 0x246)) &
             0xffffffffffffff40;
    uVar15 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 >> 6);
  }
  local_158 = &local_118;
  local_168 = &local_108;
  cVar4 = FUN_1447e3edc(param_3,*param_4,*(undefined4 *)(param_1 + 0x20),uVar15);
  if (cVar4 != '\0') {
    local_b0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = (uint)*(ushort *)(param_2 + 0x24);
    local_60 = *(undefined8 *)(param_2 + 0x38);
    local_68 = 0xb;
    local_58 = 1;
    local_56 = 1;
    local_54 = 0x22;
    local_57 = ((uint)local_60 >> 0xc & 1) == 0;
    local_150 = (uint)*param_5 & 0x3f;
    local_128 = *(undefined4 *)(param_1 + 8);
    local_120 = param_6;
    local_130 = 1;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_158 = (undefined8 *)CONCAT44(local_158._4_4_,iVar16);
    local_160 = (undefined8 *)CONCAT44(local_160._4_4_,iVar12);
    local_168 = &local_108;
    local_55 = local_57;
    FUN_140b07aec(param_4,param_3,param_1 + 0x40);
  }
LAB_141782907:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141782e84 FUN_141782e84 body=369 status=ok
// SIG undefined FUN_141782e84(void)

void FUN_141782e84(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  puVar5 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x38))();
  }
  lVar6 = *(longlong *)(param_1 + 200);
  if (lVar6 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar6 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar6 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar6 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0xc0);
  if (lVar6 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar6 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar6 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar6 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 141782ff6 FUN_141782ff6 body=147 status=ok
// SIG undefined FUN_141782ff6(void)

void FUN_141782ff6(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    lVar3 = *(longlong *)(param_1 + 0x36b8 + lVar3 * 8);
    if (lVar3 != 0) {
      plVar1 = *(longlong **)(lVar3 + 0x28);
      FUN_1402a6c27(local_40);
      local_58 = 0x3f800000;
      uStack_54 = 0x3f800000;
      uStack_50 = 0x3f800000;
      uStack_4c = 0x3f800000;
      (**(code **)(*plVar1 + 0x110))(plVar1,&local_58,local_40);
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14178308a FUN_14178308a body=50 status=ok
// SIG undefined FUN_14178308a(void)

void FUN_14178308a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_FUN_14a3118d0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



// FUNCTION 1417830bc FUN_1417830bc body=43 status=ok
// SIG undefined FUN_1417830bc(void)

void FUN_1417830bc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14a311900;
  puVar1[1] = param_1;
  return;
}



// FUNCTION 1417830e8 FUN_1417830e8 body=217 status=ok
// SIG undefined FUN_1417830e8(void)

longlong FUN_1417830e8(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_3 + 0xb0);
  lVar8 = *(longlong *)(param_3 + 0xa8);
  *(int *)(param_1 + 0xb0) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  else {
    if (lVar8 == 0) {
      lVar8 = param_3;
    }
    FUN_14473945a(param_1,iVar1,0);
    lVar7 = *(longlong *)(param_1 + 0xa8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      lVar7 = param_1;
    }
    FUN_1447393f1(lVar7,lVar8,iVar1);
  }
  uVar2 = *(undefined8 *)(param_3 + 0xb8);
  uVar3 = *(undefined8 *)(param_3 + 0xc0);
  uVar4 = *(undefined8 *)(param_3 + 0xd0);
  uVar5 = *(undefined8 *)(param_3 + 0xd8);
  uVar6 = *(undefined8 *)(param_3 + 0xe0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_3 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_3 + 0xe8);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = param_4;
  return param_1;
}



// FUNCTION 1417831c2 FUN_1417831c2 body=40 status=ok
// SIG undefined FUN_1417831c2(void)

undefined8 FUN_1417831c2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417831ea FUN_1417831ea body=40 status=ok
// SIG undefined FUN_1417831ea(void)

undefined8 FUN_1417831ea(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141783212 FUN_141783212 body=255 status=ok
// SIG undefined FUN_141783212(void)

void FUN_141783212(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141783312 FUN_141783312 body=40 status=ok
// SIG undefined FUN_141783312(void)

undefined8 FUN_141783312(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178333a FUN_14178333a body=52 status=ok
// SIG undefined FUN_14178333a(void)

undefined8 * FUN_14178333a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3118d0;
  FUN_1400200e4(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178336e FUN_14178336e body=29 status=ok
// SIG undefined FUN_14178336e(void)

undefined8 FUN_14178336e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178338c FUN_14178338c body=65 status=ok
// SIG undefined FUN_14178338c(void)

longlong FUN_14178338c(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417833ce FUN_1417833ce body=272 status=ok
// SIG undefined FUN_1417833ce(void)

void FUN_1417833ce(longlong param_1,int param_2)

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



// FUNCTION 1417834de FUN_1417834de body=40 status=ok
// SIG undefined FUN_1417834de(void)

undefined8 FUN_1417834de(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141783506 FUN_141783506 body=201 status=ok
// SIG undefined FUN_141783506(void)

undefined8 * FUN_141783506(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417835d0 FUN_1417835d0 body=201 status=ok
// SIG undefined FUN_1417835d0(void)

undefined8 * FUN_1417835d0(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14178369a FUN_14178369a body=201 status=ok
// SIG undefined FUN_14178369a(void)

undefined8 * FUN_14178369a(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141783764 FUN_141783764 body=830 status=ok
// SIG undefined FUN_141783764(void)

void FUN_141783764(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float _X;
  float fVar10;
  
  FUN_140661c88((undefined8 *)(param_1 + 0x10),param_2,L"UniformSphereSamplesBuffer",0x10,0x40,1,1,0
               );
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  lVar3 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0,0x400,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  puVar6 = (undefined4 *)(lVar3 + 0xc);
  uVar5 = 0xde4dc0de;
  lVar3 = 0;
  do {
    lVar7 = 0;
    puVar4 = puVar6;
    do {
      fVar8 = ((float)(uVar5 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0 + (float)(int)lVar3)
              * 0.125;
      fVar10 = 1.0 - (fVar8 + fVar8);
      fVar8 = 1.0 - fVar10 * fVar10;
      if (fVar8 < 0.0) {
        fVar8 = sqrtf(fVar8);
      }
      else {
        fVar8 = SQRT(fVar8);
      }
      uVar5 = uVar5 * -0x4b9b4d07 + 0x9d6f2492;
      _X = ((float)(uVar5 >> 9 | 0x3f800000) + -1.0 + (float)(int)lVar7) * 0.125 * 6.2831855;
      fVar9 = cosf(_X);
      puVar4[-3] = fVar9 * fVar8;
      fVar9 = sinf(_X);
      puVar4[-2] = fVar9 * fVar8;
      puVar4[-1] = fVar10;
      *puVar4 = 0;
      lVar7 = lVar7 + 1;
      puVar4 = puVar4 + 0x20;
    } while (lVar7 != 8);
    lVar3 = lVar3 + 1;
    puVar6 = puVar6 + 4;
  } while (lVar3 != 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001417839fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
  FUN_14002049c(param_2,0);
  return;
}


