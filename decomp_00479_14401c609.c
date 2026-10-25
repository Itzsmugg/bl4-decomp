// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14401c609 FUN_14401c609 body=47 status=ok
// SIG undefined FUN_14401c609(void)

longlong FUN_14401c609(void)

{
  if (DAT_14cba3268 == 0) {
    FUN_14000fc22(&DAT_14cba3268,&PTR_FUN_14b649e88);
  }
  return DAT_14cba3268;
}



// FUNCTION 14401c638 FUN_14401c638 body=2027 status=ok
// SIG undefined FUN_14401c638(void)

void FUN_14401c638(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_14401c805;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
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
LAB_14401c805:
  uStack_30 = 0;
  uStack_2c = 0;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_30);
            goto LAB_14401c9b9;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &uStack_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_30,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_30,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_30,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined4)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
LAB_14401c9b9:
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_34);
            goto LAB_14401cb6c;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_34) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_34,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_34,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_34,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_34,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (undefined4)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
LAB_14401cb6c:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1442210d0(local_28,CONCAT44(uStack_2c,uStack_30),local_34);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401ce24 FUN_14401ce24 body=47 status=ok
// SIG undefined FUN_14401ce24(void)

longlong FUN_14401ce24(void)

{
  if (DAT_14cba3270 == 0) {
    FUN_14000fc22(&DAT_14cba3270,&PTR_FUN_14b649f78);
  }
  return DAT_14cba3270;
}



// FUNCTION 14401ce54 FUN_14401ce54 body=1222 status=ok
// SIG undefined FUN_14401ce54(void)

void FUN_14401ce54(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_14401d021;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
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
LAB_14401d021:
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_14401d1b4;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_14401d1b4:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_144221112(local_28);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401d31b FUN_14401d31b body=47 status=ok
// SIG undefined FUN_14401d31b(void)

longlong FUN_14401d31b(void)

{
  if (DAT_14cba3278 == 0) {
    FUN_14000fc22(&DAT_14cba3278,&PTR_FUN_14b64a070);
  }
  return DAT_14cba3278;
}



// FUNCTION 14401d34a FUN_14401d34a body=1369 status=ok
// SIG undefined FUN_14401d34a(void)

void FUN_14401d34a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_14401d517;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
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
LAB_14401d517:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_14401d6cb;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
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
LAB_14401d6cb:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144220d34(local_28,local_30);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401d8a4 FUN_14401d8a4 body=34 status=ok
// SIG undefined FUN_14401d8a4(void)

void FUN_14401d8a4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14401d8cc();
  FUN_14069c8d6(uVar1,&PTR_s_ApplyJinx_14b64a0b0,3);
  return;
}



// FUNCTION 14401d8cc FUN_14401d8cc body=227 status=ok
// SIG undefined FUN_14401d8cc(void)

longlong FUN_14401d8cc(void)

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
  if (DAT_14cba3280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458ce09c;
    local_38 = &LAB_14401d9b0;
    local_40 = &LAB_14401d9b3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxSkillNetSpecializationComponent_RoboDealer",&DAT_14cba3280
                  ,FUN_14401d8a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba3280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401d9bc FUN_14401d9bc body=104 status=ok
// SIG undefined FUN_14401d9bc(void)

void FUN_14401d9bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba32a0) {
    FUN_144b3d300(&DAT_14cba32a0);
    if (DAT_14cba32a0 == -1) {
      FUN_1446f470e(&DAT_14cba3298,L"JinxTargetList",1);
      _Init_thread_footer(&DAT_14cba32a0);
      return;
    }
  }
  return;
}



// FUNCTION 14401da24 FUN_14401da24 body=82 status=ok
// SIG undefined FUN_14401da24(void)

void FUN_14401da24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6530c0;
  param_1[5] = &PTR_FUN_14b653560;
  param_1[6] = &PTR_LAB_14b6535a0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x4a);
  FUN_145b06f62(param_1);
  return;
}



// FUNCTION 14401da76 FUN_14401da76 body=55 status=ok
// SIG undefined FUN_14401da76(void)

void FUN_14401da76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba32e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba32e0 = FUN_14171c317(FUN_1465b8c50,uVar1,L"EGbxSkillStateConditionInvType");
  }
  return;
}



// FUNCTION 14401daad FUN_14401daad body=55 status=ok
// SIG undefined FUN_14401daad(void)

void FUN_14401daad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3358 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3358 =
         FUN_14171c317(FUN_1465b8ed8,uVar1,L"EGbxSkillStateConditionOakCharacterConditionType");
  }
  return;
}



// FUNCTION 14401db28 FUN_14401db28 body=55 status=ok
// SIG undefined FUN_14401db28(void)

void FUN_14401db28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3520 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3520 = FUN_14171c317(FUN_1465b9034,uVar1,L"ESkillConditionOakCharacterMovementTypes");
  }
  return;
}



// FUNCTION 14401db5f FUN_14401db5f body=55 status=ok
// SIG undefined FUN_14401db5f(void)

void FUN_14401db5f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3580 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3580 = FUN_14171c317(FUN_1465b9226,uVar1,L"EGbxSkillCondWeaponAmmoState");
  }
  return;
}



// FUNCTION 14401db96 FUN_14401db96 body=55 status=ok
// SIG undefined FUN_14401db96(void)

void FUN_14401db96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3700 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3700 = FUN_14171c317(FUN_1465b9b52,uVar1,L"EGbxSkillTokenStackProviderModifierChannel")
    ;
  }
  return;
}



// FUNCTION 14401dbcd FUN_14401dbcd body=55 status=ok
// SIG undefined FUN_14401dbcd(void)

void FUN_14401dbcd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3718 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3718 = FUN_14171c317(FUN_1465b9b81,uVar1,L"EGbxSkillTokenStackProviderAttr");
  }
  return;
}



// FUNCTION 14401dc04 FUN_14401dc04 body=55 status=ok
// SIG undefined FUN_14401dc04(void)

void FUN_14401dc04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3730 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3730 = FUN_14171c317(FUN_1465b9bb0,uVar1,L"EGbxSkillStackTokenChangeOp");
  }
  return;
}



// FUNCTION 14401dc3b FUN_14401dc3b body=55 status=ok
// SIG undefined FUN_14401dc3b(void)

void FUN_14401dc3b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3748 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3748 = FUN_14171c317(FUN_1465b9bdf,uVar1,L"EGbxSkillStackTokenExpirationRule");
  }
  return;
}



// FUNCTION 14401dc72 FUN_14401dc72 body=55 status=ok
// SIG undefined FUN_14401dc72(void)

void FUN_14401dc72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3760 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3760 = FUN_14171c317(FUN_1465b9c0e,uVar1,L"EGbxSkillStackTokenConsumptionRule");
  }
  return;
}



// FUNCTION 14401dca9 FUN_14401dca9 body=55 status=ok
// SIG undefined FUN_14401dca9(void)

void FUN_14401dca9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba37f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba37f8 = FUN_14171c317(FUN_1465b9e6a,uVar1,L"ETokenStackValueType");
  }
  return;
}



// FUNCTION 14401dce0 FUN_14401dce0 body=55 status=ok
// SIG undefined FUN_14401dce0(void)

void FUN_14401dce0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3858 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3858 = FUN_14171c317(FUN_1465ba026,uVar1,L"EGbxStatusEffectAspectCharacterLock");
  }
  return;
}



// FUNCTION 14401dd18 FUN_14401dd18 body=55 status=ok
// SIG undefined FUN_14401dd18(void)

void FUN_14401dd18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba38a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba38a0 =
         FUN_140002ddd(FUN_14401dd4f,uVar1,L"GbxStatusEffectAspectData_CorpoHacker_Contagion");
  }
  return;
}



// FUNCTION 14401dd4f FUN_14401dd4f body=47 status=ok
// SIG undefined FUN_14401dd4f(void)

longlong FUN_14401dd4f(void)

{
  if (DAT_14cba3898 == 0) {
    FUN_14086a14e(&DAT_14cba3898,&PTR_FUN_14b64e678);
  }
  return DAT_14cba3898;
}



// FUNCTION 14401dd7e FUN_14401dd7e body=48 status=ok
// SIG undefined FUN_14401dd7e(void)

void FUN_14401dd7e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b6529b0;
  return;
}



// FUNCTION 14401ddae FUN_14401ddae body=38 status=ok
// SIG undefined FUN_14401ddae(void)

undefined8 FUN_14401ddae(undefined8 param_1,int param_2)

{
  FUN_14401da24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401ddd4 FUN_14401ddd4 body=45 status=ok
// SIG undefined FUN_14401ddd4(void)

longlong FUN_14401ddd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14401da24(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401e654 FUN_14401e654 body=228 status=ok
// SIG undefined FUN_14401e654(void)

void FUN_14401e654(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0xa8) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0xa8;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401e73a FUN_14401e73a body=751 status=ok
// SIG undefined FUN_14401e73a(void)

bool FUN_14401e73a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_14401ea15;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0xa8;
      } while (lVar11 * 0xa8 - lVar12 != 0);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_14401e92f:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_14401e92f;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x00014401e97e;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x00014401e97e:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_14401ea15;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_14401e908:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x00014401e9cd;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_14401e9ec;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_14401e908;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_14401e9ec:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x00014401e9cd:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_14401ea15:
  return iVar3 != param_2;
}



// FUNCTION 14401ea2a FUN_14401ea2a body=234 status=ok
// SIG undefined FUN_14401ea2a(void)

void FUN_14401ea2a(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0xa8;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14401eb16 FUN_14401eb16 body=1069 status=ok
// SIG undefined FUN_14401eb16(void)

void FUN_14401eb16(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1];
  iVar11 = 0;
  iVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar13 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + (uint)(byte)(*(int *)(*plVar2 + lVar13) != -1 |
                                  *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar13 = lVar13 + 0xa8;
    } while ((longlong)iVar3 * 0xa8 - lVar13 != 0);
  }
  if (param_3 != (longlong *)0x0) {
    iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar11 = iVar11 - iVar9;
  local_80 = param_2;
  if (0 < iVar3) {
    local_78 = param_3 + 7;
    lVar13 = 0;
    do {
      iVar3 = *(int *)(*plVar2 + lVar13 * 0xa8);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar3 != -1)) {
        puVar15 = (uint *)(*plVar2 + lVar13 * 0xa8);
        if (iVar3 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar15);
        }
        local_60 = puVar15;
        local_58 = puVar15 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar12 = *puVar15;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar2 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar2 = local_78;
          }
          iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_3[9] - 1U & uVar12) * 4);
          if (iVar3 != -1) {
            do {
              lVar10 = *param_3 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar3 * 0x10) == uVar12) {
                if ((uint *)(lVar10 + 4) != (uint *)0x0 && lVar10 != 0) {
                  if (*(uint *)(lVar10 + 4) != puVar15[1]) {
                    iVar3 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar3 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
                      FUN_14593fc44(param_4,iVar3);
                    }
                    lVar10 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar10 = param_4;
                    }
                    *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) =
                         ((ulonglong)uVar12 << 0x20) + lVar13;
                  }
                  goto LAB_14401ec8f;
                }
                break;
              }
              iVar3 = *(int *)(lVar10 + 8);
            } while (iVar3 != -1);
          }
        }
        iVar3 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
          FUN_14593fc44(param_4,iVar3);
        }
        lVar10 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar10 = param_4;
        }
        *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) = ((ulonglong)uVar12 << 0x20) + lVar13;
        iVar11 = iVar11 + 1;
      }
LAB_14401ec8f:
      lVar13 = lVar13 + 1;
      plVar2 = *(longlong **)(param_1 + 8);
    } while (lVar13 < (int)plVar2[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar11)) {
    puVar15 = (uint *)(param_3 + 2);
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar8 = puVar15;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_14401ef12;
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      local_68 = local_80 + 7;
      uVar12 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar13 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar5 = *(uint *)(lVar13 + (longlong)iVar4 * 0x10);
          plVar2 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar2 = local_68;
          }
          iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)local_80[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_14401ee7d;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *local_80 + 8);
            } while (iVar6 != -1);
          }
        }
        iVar3 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar3 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar9);
          FUN_1400cc390(param_5,iVar3);
          param_3 = local_70;
          iVar9 = (int)local_78;
        }
        lVar10 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar10 = param_5;
        }
        *(undefined4 *)(lVar10 + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar13 + (longlong)iVar4 * 0x10);
        if (iVar11 < 2) break;
        iVar11 = iVar11 + -1;
        iVar3 = (int)param_3[5];
LAB_14401ee7d:
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar8 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar8 = puVar15;
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar13 == lVar10) goto LAB_14401ef12;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
  }
LAB_14401ef12:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401ef44 FUN_14401ef44 body=496 status=ok
// SIG undefined FUN_14401ef44(void)

void FUN_14401ef44(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14401f136 FUN_14401f136 body=723 status=ok
// SIG undefined FUN_14401f136(void)

undefined8 FUN_14401f136(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_14401f397;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_14401f397:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14401f40a FUN_14401f40a body=29 status=ok
// SIG undefined FUN_14401f40a(void)

undefined8 FUN_14401f40a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401f49e FUN_14401f49e body=59 status=ok
// SIG undefined FUN_14401f49e(void)

undefined8 FUN_14401f49e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401f53e FUN_14401f53e body=29 status=ok
// SIG undefined FUN_14401f53e(void)

undefined8 FUN_14401f53e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401f55c FUN_14401f55c body=55 status=ok
// SIG undefined FUN_14401f55c(void)

void FUN_14401f55c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3228 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3228 = FUN_140002ddd(FUN_14401c449,uVar1,L"JinxCountValueResolver");
  }
  return;
}



// FUNCTION 14401f5b4 FUN_14401f5b4 body=29 status=ok
// SIG undefined FUN_14401f5b4(void)

undefined8 FUN_14401f5b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401f634 FUN_14401f634 body=109 status=ok
// SIG undefined FUN_14401f634(void)

undefined1 FUN_14401f634(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      *param_2 = 0xffffffffffffffff;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
    lVar1 = param_3[2];
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = param_3[2];
      }
    }
    param_2[2] = lVar1;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
    param_2 = param_2 + 4;
    param_3 = param_3 + 4;
  }
  return 1;
}



// FUNCTION 14401f6ca FUN_14401f6ca body=59 status=ok
// SIG undefined FUN_14401f6ca(void)

undefined8 FUN_14401f6ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401f76c FUN_14401f76c body=29 status=ok
// SIG undefined FUN_14401f76c(void)

undefined8 FUN_14401f76c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401f798 FUN_14401f798 body=59 status=ok
// SIG undefined FUN_14401f798(void)

void FUN_14401f798(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x128);
  FUN_140f23ff6(param_2);
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  return;
}



// FUNCTION 14401f7d4 FUN_14401f7d4 body=43 status=ok
// SIG undefined FUN_14401f7d4(void)

void FUN_14401f7d4(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  return;
}



// FUNCTION 14401f800 FUN_14401f800 body=38 status=ok
// SIG undefined FUN_14401f800(void)

void FUN_14401f800(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_2);
  return;
}



// FUNCTION 14401f834 FUN_14401f834 body=6952 status=ok
// SIG undefined FUN_14401f834(void)

uint * FUN_14401f834(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong *plVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong *puVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong *puVar30;
  longlong *plVar31;
  ulonglong uVar32;
  longlong lVar33;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  uint *local_238;
  longlong *local_230;
  longlong *local_228;
  uint *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  uint *local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  uint *local_1e0;
  longlong local_1d8;
  uint local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  uint local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  uint *local_188;
  undefined1 local_17c [4];
  uint local_178 [8];
  uint *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined4 *local_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined4 local_f8 [8];
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  plVar16 = param_3 + 0x22;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_14401fde6:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_268);
  }
  if (DAT_14cba3240 == 0) {
    uVar6 = FUN_14064613c();
    DAT_14cba3240 = FUN_140002ddd(FUN_14401c4df,uVar6,L"OakSpecializationComponent_JinxTargetItem");
  }
  lVar26 = DAT_14cba3240;
  local_1b0 = DAT_14cba3240;
  local_1a8 = plVar16;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_144021dfa();
  local_230 = param_2;
  local_210 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar26;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar8 = (uint *)(param_3 + 0xd);
      iVar20 = (int)param_3[0x10];
      if (iVar20 == 0) {
        uVar29 = 1;
        uVar32 = 0;
        iVar28 = 0;
        iVar23 = 0;
      }
      else {
        puVar25 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar25 = puVar8;
        }
        uVar22 = *puVar25;
        if (uVar22 == 0) {
          iVar28 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar28 = iVar20 + -1;
          }
          uVar32 = 0;
          uVar29 = (ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            uVar29 = uVar32;
          }
          iVar28 = 0;
          do {
            if (uVar29 == uVar32) goto LAB_14401fc09;
            iVar28 = iVar28 + 0x20;
            uVar22 = puVar25[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar32 = 0;
          iVar28 = 0;
        }
        uVar29 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar29 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar23 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar20 <= iVar23) {
          iVar23 = iVar20;
        }
      }
      if (iVar23 == iVar20) {
LAB_14401fc09:
        local_238 = (uint *)0x0;
        puVar25 = local_238;
      }
      else {
        uVar22 = 0xffffffff;
        local_238 = (uint *)0x0;
        iVar14 = iVar20;
        do {
          lVar26 = param_3[0xb];
          lVar21 = (longlong)iVar23 * 200;
          if (*(int *)(lVar26 + 0x60 + lVar21) != *(int *)(lVar26 + 0x8c + lVar21)) {
            lVar33 = lVar26 + lVar21;
            lVar27 = lVar33 + 0x90;
            if (*(longlong *)(lVar33 + 0x98) != 0) {
              lVar27 = *(longlong *)(lVar33 + 0x98);
            }
            iVar23 = *(int *)(lVar27 + (ulonglong)
                                       (*(int *)(lVar33 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar23 != -1) {
              local_230 = (longlong *)CONCAT44(local_230._4_4_,iVar28);
              plVar16 = (longlong *)(lVar21 + lVar26 + 0x58);
              lVar26 = *plVar16;
              do {
                if (*(undefined ***)(lVar26 + (longlong)iVar23 * 0x10) == local_108) {
                  lVar33 = lVar33 + 8;
                  FUN_140326250(plVar16,&local_108);
                  FUN_140325a06(lVar33,&local_148,&local_108,0);
                  iVar14 = (int)param_3[0x10];
                  local_238 = (uint *)CONCAT71((int7)((ulonglong)lVar33 >> 8),1);
                  break;
                }
                iVar23 = *(int *)((longlong)iVar23 * 0x10 + lVar26 + 8);
              } while (iVar23 != -1);
              iVar28 = (int)local_230;
            }
          }
          uVar22 = uVar22 & ~(uint)uVar29;
          puVar25 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar25 = puVar8;
          }
          iVar23 = (int)uVar32;
          lVar26 = (longlong)iVar23;
          uVar17 = puVar25[lVar26] & uVar22;
          if (uVar17 == 0) {
            iVar12 = iVar14 + 0x1e;
            if (-1 < iVar14 + -1) {
              iVar12 = iVar14 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar28 = iVar28 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar23) {
              iVar13 = iVar23;
            }
            if (iVar23 < iVar12) {
              lVar21 = 0;
              do {
                uVar17 = puVar25[lVar26 + lVar21 + 1];
                if (uVar17 != 0) {
                  uVar32 = (ulonglong)(iVar23 + (int)lVar21 + 1);
                  uVar22 = 0xffffffff;
                  goto LAB_14401fd7d;
                }
                iVar28 = iVar28 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar13 - lVar26 != lVar21);
              uVar22 = 0xffffffff;
              iVar23 = iVar13;
            }
            uVar32 = (ulonglong)(iVar23 + 1);
            param_3 = local_210;
            iVar23 = iVar14;
          }
          else {
LAB_14401fd7d:
            uVar29 = (ulonglong)(-uVar17 & uVar17);
            uVar1 = uVar29 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar23 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (iVar14 <= iVar23) {
              iVar23 = iVar14;
            }
          }
          puVar25 = local_238;
        } while (iVar23 != iVar20);
      }
      goto LAB_14402134e;
    }
    local_1e8 = plVar16;
    if ((char)param_2[9] == '\x01') {
      local_128 = (undefined4 *)0x0;
      local_120 = 0x800000000;
      puVar8 = (uint *)(param_3 + 0xd);
      iVar20 = (int)param_3[0x10];
      if (iVar20 == 0) {
        uVar29 = 1;
        puVar25 = (uint *)0x0;
        iVar28 = 0;
        iVar23 = 0;
      }
      else {
        puVar15 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar15 = puVar8;
        }
        uVar22 = *puVar15;
        if (uVar22 == 0) {
          iVar28 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar28 = iVar20 + -1;
          }
          puVar25 = (uint *)0x0;
          puVar18 = (uint *)(ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            puVar18 = puVar25;
          }
          iVar28 = 0;
          do {
            if (puVar18 == puVar25) goto LAB_144020419;
            iVar28 = iVar28 + 0x20;
            uVar22 = puVar15[(longlong)puVar25 + 1];
            puVar25 = (uint *)((longlong)puVar25 + 1);
          } while (uVar22 == 0);
        }
        else {
          puVar25 = (uint *)0x0;
          iVar28 = 0;
        }
        uVar29 = (ulonglong)(-uVar22 & uVar22);
        uVar32 = uVar29 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar23 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar20 <= iVar23) {
          iVar23 = iVar20;
        }
      }
      if (iVar23 < iVar20) {
        local_218 = param_3 + 0xb;
        local_1c0 = param_3 + 7;
        uVar22 = 0xffffffff;
        local_1c8 = puVar8;
LAB_14401fe9c:
        local_208 = (longlong *)CONCAT44(local_208._4_4_,uVar22);
        local_200 = (uint *)CONCAT44(local_200._4_4_,iVar23);
        puVar15 = (uint *)(*local_218 + (longlong)iVar23 * 200);
        puVar18 = puVar15 + 2;
        uVar22 = *puVar15;
        if (((puVar15[4] != puVar15[0xf]) || (puVar15[0x18] != puVar15[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar16 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar16 = local_1c0;
          }
          iVar20 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_3[9] - 1U & uVar22) * 4);
          if (iVar20 != -1) {
            do {
              lVar26 = *param_3 + (longlong)iVar20 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar20 * 0x10) == uVar22) {
                if ((lVar26 != 0) && (lVar26 != -4)) {
                  uVar17 = puVar15[0xc];
                  local_1f0 = CONCAT44(local_1f0._4_4_,iVar28);
                  local_220 = puVar25;
                  local_1f8 = uVar29;
                  local_1cc = uVar22;
                  if (uVar17 == 0) {
                    uVar29 = 1;
                    uVar32 = 0;
                    iVar20 = 0;
                    uVar22 = 0;
                    goto LAB_14401ffe4;
                  }
                  puVar25 = *(uint **)(puVar15 + 10);
                  if (*(uint **)(puVar15 + 10) == (uint *)0x0) {
                    puVar25 = puVar15 + 6;
                  }
                  uVar22 = *puVar25;
                  if (uVar22 != 0) {
                    uVar32 = 0;
                    iVar20 = 0;
                    goto LAB_14401ffae;
                  }
                  iVar20 = uVar17 + 0x1e;
                  if (-1 < (int)(uVar17 - 1)) {
                    iVar20 = uVar17 - 1;
                  }
                  uVar32 = 0;
                  uVar29 = (ulonglong)(uint)(iVar20 >> 5);
                  if (iVar20 >> 5 < 1) {
                    uVar29 = uVar32;
                  }
                  iVar20 = 0;
                  goto LAB_14401ff95;
                }
                break;
              }
              iVar20 = *(int *)(lVar26 + 8);
            } while (iVar20 != -1);
          }
        }
        goto LAB_14402030a;
      }
LAB_144020419:
      puVar7 = local_128;
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_14401fde6;
      }
      plVar16 = (longlong *)*param_2;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)param_2[1];
        local_d8 = (undefined4 *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_1440228ce(&local_1b0);
        if (cVar5 == '\0') {
LAB_144021063:
          if (local_d8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
LAB_144021075:
          puVar25 = (uint *)0x0;
          goto LAB_14402134e;
        }
        iVar20 = 0;
        local_128 = (undefined4 *)0x0;
        local_120 = 0x800000000;
        local_158 = (uint *)0x0;
        local_150 = 0x800000000;
        plVar10 = local_230;
        if (0 < local_100) {
          local_238 = (uint *)(param_3 + 7);
          local_1e0 = (uint *)(param_3 + 0xb);
          do {
            plVar10 = local_1e8;
            local_1b4 = 0;
            puVar30 = (ulonglong *)plVar16[1];
            puVar8 = (uint *)*puVar30 + 1;
            if ((uint *)puVar30[1] < puVar8) {
              if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar16 + 0x170))(plVar16,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar16,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar30;
              *puVar30 = (ulonglong)puVar8;
            }
            uVar29 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              puVar8 = (uint *)param_3[8];
              if ((uint *)param_3[8] == (uint *)0x0) {
                puVar8 = local_238;
              }
              uVar22 = puVar8[(int)param_3[9] - 1U & local_1b4];
              if (uVar22 != 0xffffffff) {
                do {
                  lVar26 = *param_3 + (longlong)(int)uVar22 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)(int)uVar22 * 0x10) == local_1b4) {
                    if ((uint *)(lVar26 + 4) != (uint *)0x0 && lVar26 != 0) {
                      local_1b8 = *(uint *)(lVar26 + 4);
                      lVar26 = (longlong)(int)local_1b8 * 0x20 + *plVar10;
                      lVar21 = (longlong)(int)local_120;
                      uVar22 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar22);
                      if (local_120._4_4_ < uVar22) {
                        FUN_1400cc390(&local_148,uVar29 & 0xffffffff);
                      }
                      puVar7 = local_128;
                      if (local_128 == (undefined4 *)0x0) {
                        puVar7 = &local_148;
                      }
                      puVar7[lVar21] = local_1b8;
                      goto LAB_14402064b;
                    }
                    break;
                  }
                  uVar22 = *(uint *)(lVar26 + 8);
                } while (uVar22 != 0xffffffff);
              }
            }
            local_1b8 = 0;
            iVar28 = (int)param_3[0x23];
            *(uint *)(param_3 + 0x23) = iVar28 + 1U;
            if (*(uint *)((longlong)param_3 + 0x11c) < iVar28 + 1U) {
              FUN_144022c12(plVar10,iVar28);
            }
            lVar21 = param_3[0x22];
            lVar26 = lVar21 + (longlong)iVar28 * 0x20;
            FUN_144022bf4(lVar26);
            *(uint *)(lVar21 + (longlong)iVar28 * 0x20) = local_1b4;
            local_1b8 = (int)param_3[0x23] - 1;
            local_188 = &local_1b8;
            local_190 = &local_1b4;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar29 = local_150;
            lVar21 = (longlong)(int)local_150;
            uVar22 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar22);
            if (local_150._4_4_ < uVar22) {
              FUN_1400cc390(local_178,uVar29 & 0xffffffff);
            }
            puVar8 = local_158;
            if (local_158 == (uint *)0x0) {
              puVar8 = local_178;
            }
            puVar8[lVar21] = local_1b8;
LAB_14402064b:
            plVar10 = local_230;
            *(int *)(lVar26 + 8) = (int)local_108;
            *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + 1;
            lVar21 = local_230[4];
            FUN_144958770(lVar21 + 0x30,0);
            FUN_144958770(lVar21 + 0x80,0);
            *(undefined1 *)(lVar21 + 0x28) = 1;
            puVar8 = (uint *)plVar16[0x15];
            plVar10[7] = local_1d8;
            plVar10[6] = lVar26;
            local_190 = puVar8;
            (**(code **)(*(longlong *)plVar10[8] + 8))((longlong *)plVar10[8],plVar10);
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) == 0) {
              lVar26 = plVar10[4];
              if ((*(int *)(lVar26 + 0x38) == *(int *)(lVar26 + 100)) &&
                 (*(int *)(lVar26 + 0x88) == *(int *)(lVar26 + 0xb4))) {
                FUN_1456fd588(local_1e0,local_1b4);
                plVar10 = local_230;
              }
              else {
                local_208 = (longlong *)(lVar26 + 0x30);
                plVar10 = (longlong *)FUN_1456fd5f6(local_1e0,local_1b4);
                local_228 = plVar10;
                if ((int)plVar10[1] - *(int *)((longlong)plVar10 + 0x34) ==
                    *(int *)(lVar26 + 0x38) - *(int *)(lVar26 + 100)) {
                  local_220 = (uint *)(plVar10 + 2);
                  iVar28 = (int)plVar10[5];
                  if (iVar28 == 0) {
                    uVar32 = 1;
                    uVar29 = 0;
                    iVar14 = 0;
                    iVar23 = 0;
                  }
                  else {
                    puVar25 = (uint *)plVar10[4];
                    if ((uint *)plVar10[4] == (uint *)0x0) {
                      puVar25 = local_220;
                    }
                    uVar22 = *puVar25;
                    if (uVar22 == 0) {
                      iVar23 = iVar28 + 0x1e;
                      if (-1 < iVar28 + -1) {
                        iVar23 = iVar28 + -1;
                      }
                      uVar29 = 0;
                      uVar32 = (ulonglong)(uint)(iVar23 >> 5);
                      if (iVar23 >> 5 < 1) {
                        uVar32 = uVar29;
                      }
                      iVar14 = 0;
                      do {
                        if (uVar32 == uVar29) goto LAB_144020901;
                        iVar14 = iVar14 + 0x20;
                        uVar22 = puVar25[uVar29 + 1];
                        uVar29 = uVar29 + 1;
                      } while (uVar22 == 0);
                    }
                    else {
                      uVar29 = 0;
                      iVar14 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar22 & uVar22);
                    uVar1 = uVar32 * 2 + 1;
                    lVar21 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                      }
                    }
                    iVar23 = (iVar14 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                    if (iVar28 <= iVar23) {
                      iVar23 = iVar28;
                    }
                  }
                  if (iVar23 != iVar28) {
                    if ((uint *)plVar10[4] != (uint *)0x0) {
                      local_220 = (uint *)plVar10[4];
                    }
                    iVar12 = iVar28 + 0x1e;
                    if (-1 < iVar28 + -1) {
                      iVar12 = iVar28 + -1;
                    }
                    if (*(int *)(lVar26 + 0x38) == *(int *)(lVar26 + 100)) goto LAB_1440208e9;
                    iVar12 = iVar12 >> 5;
                    local_1f0 = lVar26 + 0x68;
                    if (*(longlong *)(lVar26 + 0x70) != 0) {
                      local_1f0 = *(longlong *)(lVar26 + 0x70);
                    }
                    uVar22 = *(int *)(lVar26 + 0x78) - 1;
                    local_1f8 = CONCAT44(local_1f8._4_4_,uVar22);
                    local_200 = local_220 + 1;
                    local_218 = (longlong *)CONCAT44(local_218._4_4_,0xffffffff);
                    do {
                      lVar21 = *(longlong *)(*plVar10 + (longlong)iVar23 * 0x10);
                      iVar23 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar21 + (int)((ulonglong)lVar21 >> 0x20) * 0x17 &
                                       uVar22) * 4);
                      if (iVar23 == -1) goto LAB_1440208e9;
                      while (*(longlong *)(*local_208 + (longlong)iVar23 * 0x10) != lVar21) {
                        iVar23 = *(int *)((longlong)iVar23 * 0x10 + *local_208 + 8);
                        if (iVar23 == -1) goto LAB_1440208e9;
                      }
                      uVar24 = (uint)local_218 & ~(uint)uVar32;
                      iVar23 = (int)uVar29;
                      lVar21 = (longlong)iVar23;
                      uVar17 = local_220[lVar21] & uVar24;
                      if (uVar17 == 0) {
                        iVar13 = iVar12;
                        if (iVar12 < iVar23) {
                          iVar13 = iVar23;
                        }
                        if (iVar12 <= iVar23) break;
                        lVar33 = 0;
                        while( true ) {
                          iVar14 = iVar14 + 0x20;
                          uVar17 = local_200[lVar21 + lVar33];
                          if (uVar17 != 0) break;
                          lVar33 = lVar33 + 1;
                          if (iVar13 - lVar21 == lVar33) goto LAB_144020901;
                        }
                        uVar29 = (ulonglong)(iVar23 + (int)lVar33 + 1);
                        local_218 = (longlong *)CONCAT44(local_218._4_4_,0xffffffff);
                      }
                      else {
                        local_218 = (longlong *)CONCAT44(local_218._4_4_,uVar24);
                      }
                      uVar32 = (ulonglong)(-uVar17 & uVar17);
                      uVar1 = uVar32 * 2 + 1;
                      lVar21 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                        }
                      }
                      iVar23 = (iVar14 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                    } while (iVar23 < iVar28);
                  }
                }
                else {
LAB_1440208e9:
                  FUN_140492002(plVar10,local_208);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_144020901:
                local_208 = (longlong *)(lVar26 + 0x80);
                if ((int)local_228[0xb] - *(int *)((longlong)local_228 + 0x84) ==
                    *(int *)(lVar26 + 0x88) - *(int *)(lVar26 + 0xb4)) {
                  local_220 = (uint *)(plVar10 + 0xc);
                  iVar28 = (int)local_228[0xf];
                  if (iVar28 == 0) {
                    uVar32 = 1;
                    uVar29 = 0;
                    iVar14 = 0;
                    iVar23 = 0;
                  }
                  else {
                    puVar25 = (uint *)local_228[0xe];
                    if ((uint *)local_228[0xe] == (uint *)0x0) {
                      puVar25 = local_220;
                    }
                    uVar22 = *puVar25;
                    if (uVar22 == 0) {
                      iVar23 = iVar28 + 0x1e;
                      if (-1 < iVar28 + -1) {
                        iVar23 = iVar28 + -1;
                      }
                      uVar29 = 0;
                      uVar32 = (ulonglong)(uint)(iVar23 >> 5);
                      if (iVar23 >> 5 < 1) {
                        uVar32 = uVar29;
                      }
                      iVar14 = 0;
                      do {
                        if (uVar32 == uVar29) goto LAB_144020a1b;
                        iVar14 = iVar14 + 0x20;
                        uVar22 = puVar25[uVar29 + 1];
                        uVar29 = uVar29 + 1;
                      } while (uVar22 == 0);
                    }
                    else {
                      uVar29 = 0;
                      iVar14 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar22 & uVar22);
                    uVar1 = uVar32 * 2 + 1;
                    lVar21 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                      }
                    }
                    iVar23 = (iVar14 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                    if (iVar28 <= iVar23) {
                      iVar23 = iVar28;
                    }
                  }
                  if (iVar23 != iVar28) {
                    if ((uint *)local_228[0xe] != (uint *)0x0) {
                      local_220 = (uint *)local_228[0xe];
                    }
                    iVar12 = iVar28 + 0x1e;
                    if (-1 < iVar28 + -1) {
                      iVar12 = iVar28 + -1;
                    }
                    if (*(int *)(lVar26 + 0x88) == *(int *)(lVar26 + 0xb4)) goto LAB_144020a03;
                    iVar12 = iVar12 >> 5;
                    local_1f0 = lVar26 + 0xb8;
                    if (*(longlong *)(lVar26 + 0xc0) != 0) {
                      local_1f0 = *(longlong *)(lVar26 + 0xc0);
                    }
                    uVar22 = *(int *)(lVar26 + 200) - 1;
                    local_1f8 = CONCAT44(local_1f8._4_4_,uVar22);
                    local_200 = local_220 + 1;
                    local_218 = (longlong *)CONCAT44(local_218._4_4_,0xffffffff);
                    do {
                      lVar21 = *(longlong *)(local_228[10] + (longlong)iVar23 * 0x10);
                      iVar23 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar21 + (int)((ulonglong)lVar21 >> 0x20) * 0x17 &
                                       uVar22) * 4);
                      if (iVar23 == -1) goto LAB_144020a03;
                      while (*(longlong *)(*local_208 + (longlong)iVar23 * 0x10) != lVar21) {
                        iVar23 = *(int *)((longlong)iVar23 * 0x10 + *local_208 + 8);
                        if (iVar23 == -1) goto LAB_144020a03;
                      }
                      uVar24 = (uint)local_218 & ~(uint)uVar32;
                      iVar23 = (int)uVar29;
                      lVar21 = (longlong)iVar23;
                      uVar17 = local_220[lVar21] & uVar24;
                      if (uVar17 == 0) {
                        iVar13 = iVar12;
                        if (iVar12 < iVar23) {
                          iVar13 = iVar23;
                        }
                        if (iVar12 <= iVar23) break;
                        lVar33 = 0;
                        while( true ) {
                          iVar14 = iVar14 + 0x20;
                          uVar17 = local_200[lVar21 + lVar33];
                          if (uVar17 != 0) break;
                          lVar33 = lVar33 + 1;
                          if (iVar13 - lVar21 == lVar33) goto LAB_144020a1b;
                        }
                        uVar29 = (ulonglong)(iVar23 + (int)lVar33 + 1);
                        local_218 = (longlong *)CONCAT44(local_218._4_4_,0xffffffff);
                      }
                      else {
                        local_218 = (longlong *)CONCAT44(local_218._4_4_,uVar24);
                      }
                      uVar32 = (ulonglong)(-uVar17 & uVar17);
                      uVar1 = uVar32 * 2 + 1;
                      lVar21 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                        }
                      }
                      iVar23 = (iVar14 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                    } while (iVar23 < iVar28);
                  }
                }
                else {
LAB_144020a03:
                  FUN_140492002(plVar10 + 10,local_208);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_144020a1b:
                plVar31 = local_228;
                *(undefined4 *)(local_228 + 0x15) = 0;
                if (*(int *)((longlong)local_228 + 0xac) != 0) {
                  FUN_144893a1c(plVar10 + 0x14,0);
                }
                *(int *)(plVar31 + 0x16) = (int)plVar16[0x15] - (int)puVar8;
                FUN_14049209c(&local_190,plVar16,plVar10 + 0x14);
                plVar10 = local_230;
                if (*(int *)(lVar26 + 0x38) != *(int *)(lVar26 + 100)) {
                  *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
                }
              }
            }
            lVar26 = plVar10[4];
            FUN_144958770(lVar26 + 0x30,0);
            FUN_144958770(lVar26 + 0x80,0);
            *(undefined1 *)(lVar26 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) != 0) {
              if (local_158 != (uint *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_144021063;
            }
            iVar20 = iVar20 + 1;
            param_3 = local_210;
            plVar10 = local_198;
          } while (iVar20 < local_100);
        }
        plVar16 = local_1a8;
        if (((char)plVar10[10] == '\0') && (iVar20 = (int)local_1a8[1], 0 < iVar20)) {
          uVar29 = 0;
          do {
            uVar32 = local_d0;
            iVar28 = *(int *)(*plVar16 + 8 + uVar29 * 0x20);
            if ((iVar28 < (int)local_108) && (local_108._4_4_ < iVar28)) {
              puVar7 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar7 = local_f8;
              }
              lVar26 = (longlong)(int)local_d0;
              if (lVar26 != 0) {
                lVar21 = 0;
                do {
                  if (uVar29 == *(uint *)((longlong)puVar7 + lVar21)) goto LAB_14402113c;
                  lVar21 = lVar21 + 4;
                } while (lVar26 * 4 - lVar21 != 0);
              }
              uVar22 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar22);
              if (local_d0._4_4_ < uVar22) {
                FUN_1400cc390(local_f8,uVar32 & 0xffffffff);
              }
              puVar7 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar7 = local_f8;
              }
              puVar7[lVar26] = (int)uVar29;
              iVar20 = (int)plVar16[1];
            }
LAB_14402113c:
            uVar29 = uVar29 + 1;
          } while ((longlong)uVar29 < (longlong)iVar20);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar31 = local_1a0;
        plVar16 = local_1a8;
        puVar7 = local_d8;
        if (local_d8 == (undefined4 *)0x0) {
          puVar7 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_210 = local_210 + 0xb;
          lVar26 = (longlong)(int)local_d0;
          lVar21 = 0;
          do {
            iVar20 = *(int *)((longlong)puVar7 + lVar21);
            if ((-1 < (longlong)iVar20) && (iVar20 < (int)plVar16[1])) {
              lVar33 = (longlong)iVar20 * 0x20;
              iVar20 = FUN_1456fd588(local_210,*(undefined4 *)(*plVar16 + lVar33));
              if (0 < iVar20) {
                *(undefined1 *)((longlong)plVar10 + 0x4c) = 1;
              }
              if (plVar31[0x24] != 0) {
                FUN_1457b808a(plVar31[0x24],1,*(undefined8 *)(*plVar16 + 0x10 + lVar33));
              }
            }
            lVar21 = lVar21 + 4;
          } while (lVar26 * 4 != lVar21);
        }
        plVar10 = local_1a0;
        plVar16 = local_1a8;
        puVar8 = local_158;
        if (local_158 == (uint *)0x0) {
          puVar8 = local_178;
        }
        lVar26 = (longlong)(int)local_150;
        if (lVar26 != 0) {
          lVar21 = 0;
          do {
            if (plVar10[0x24] != 0) {
              FUN_1457b808a(plVar10[0x24],0,
                            *(undefined8 *)
                             (*plVar16 + 0x10 + (longlong)*(int *)((longlong)puVar8 + lVar21) * 0x20
                             ));
            }
            lVar21 = lVar21 + 4;
          } while (lVar26 * 4 != lVar21);
        }
        if (0 < (int)local_d0) {
          puVar7 = local_d8;
          if (local_d8 == (undefined4 *)0x0) {
            puVar7 = local_f8;
          }
          FUN_144958a06(puVar7);
          plVar16 = local_1a8;
          if (0 < (longlong)(int)local_d0) {
            uVar29 = (longlong)(int)local_d0 + 1;
            do {
              puVar7 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar7 = local_f8;
              }
              uVar22 = puVar7[uVar29 - 2];
              if ((-1 < (longlong)(int)uVar22) && (iVar20 = (int)plVar16[1], (int)uVar22 < iVar20))
              {
                iVar28 = ~uVar22 + iVar20;
                if (iVar28 != 0) {
                  if (0 < iVar28) {
                    iVar28 = 1;
                  }
                  memmove((void *)((longlong)(int)uVar22 * 0x20 + *plVar16),
                          (void *)((ulonglong)(uint)(iVar20 - iVar28) * 0x20 + *plVar16),
                          (longlong)iVar28 << 5);
                  iVar20 = (int)plVar16[1];
                }
                *(int *)(plVar16 + 1) = iVar20 + -1;
              }
              uVar29 = uVar29 - 1;
            } while (1 < uVar29);
          }
          FUN_14010afec(local_1a0,0);
        }
        if (local_158 != (uint *)0x0) {
          FUN_1400020a8();
        }
        puVar7 = local_d8;
        if (local_128 != (undefined4 *)0x0) {
          FUN_1400020a8();
          puVar7 = local_d8;
        }
        goto LAB_144021342;
      }
      lVar26 = param_2[3];
      if (lVar26 == 0) {
        local_238 = (uint *)CONCAT44(local_238._4_4_,0xffffffff);
        lVar26 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar26 + 0x70);
        cVar5 = FUN_144021edc(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_144021075;
        local_238 = (uint *)CONCAT44(local_238._4_4_,uVar3);
        lVar26 = lVar26 + 0x20;
      }
      puVar9 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = &PTR_FUN_14ab190a0;
      puVar9[8] = 0;
      *(undefined4 *)(puVar9 + 9) = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(undefined8 *)((longlong)puVar9 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar9 + 0x54) = 0;
      puVar9[0xc] = 0;
      *(undefined4 *)(puVar9 + 0xd) = 0;
      *(undefined4 *)(puVar9 + 0xe) = 0xffffffff;
      puVar11 = (undefined8 *)param_2[2];
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14ab190c0;
      plVar10[2] = (longlong)puVar9;
      if (puVar9 == (undefined8 *)0x0) {
LAB_144020e1a:
        *puVar11 = puVar9;
        plVar31 = (longlong *)puVar11[1];
        if (plVar10 == plVar31) {
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar31 = plVar10 + 1;
            *(int *)plVar31 = (int)*plVar31 + -1;
            UNLOCK();
            if ((int)*plVar31 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar4 = (int *)((longlong)plVar10 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar20 = *piVar4;
              UNLOCK();
              plVar31 = plVar10;
              goto joined_r0x000144020e55;
            }
          }
        }
        else {
          puVar11[1] = plVar10;
          if (plVar31 != (longlong *)0x0) goto LAB_144020e71;
        }
      }
      else {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          puVar9[1] = puVar9;
          if ((longlong *)puVar9[2] != plVar10) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            plVar31 = (longlong *)puVar9[2];
            if (plVar31 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar31 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar31 + 0x10))();
              }
            }
            puVar9[2] = plVar10;
          }
          LOCK();
          plVar31 = plVar10 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar4 = (int *)((longlong)plVar10 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          goto LAB_144020e1a;
        }
        puVar9[1] = puVar9;
        *puVar11 = puVar9;
        plVar31 = (longlong *)puVar11[1];
        if (plVar31 != (longlong *)0x0) {
          puVar11[1] = 0;
LAB_144020e71:
          LOCK();
          plVar10 = plVar31 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar31)(plVar31);
            LOCK();
            piVar4 = (int *)((longlong)plVar31 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar20 = *piVar4;
            UNLOCK();
joined_r0x000144020e55:
            if (iVar20 == 0) {
              (**(code **)(*plVar31 + 0x10))(plVar31);
            }
          }
        }
      }
      plVar10 = local_230;
      local_148 = *(undefined4 *)((longlong)param_3 + 0x54);
      *(undefined4 *)(puVar9 + 0xe) = local_148;
      local_144 = local_238._0_4_;
      local_140 = 0;
      local_118 = (undefined4 *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_230 + 0x4e) == '\x01') {
        FUN_1440221c8(&local_1b0,puVar9 + 4,&local_108);
      }
      else {
        local_248 = local_138;
        FUN_1440222b0(&local_1b0,puVar9 + 4,lVar26,&local_108);
        *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_1440226dc(&local_1b0);
      if (0 < (int)local_c0) {
        lVar26 = 0;
        do {
          puVar11 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar11 = &local_108;
          }
          iVar20 = *(int *)(puVar11 + lVar26);
          lVar21 = *local_1e8;
          local_178[0] = *(uint *)((longlong)puVar11 + lVar26 * 8 + 4);
          puVar30 = (ulonglong *)plVar16[1];
          puVar8 = (uint *)*puVar30 + 1;
          if ((uint *)puVar30[1] < puVar8) {
            if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar16 + 0x170))(plVar16,local_178,4);
            }
            else {
              FUN_14572512c(plVar16,local_178);
            }
          }
          else {
            local_178[0] = *(uint *)*puVar30;
            *puVar30 = (ulonglong)puVar8;
          }
          plVar10[7] = local_1d8;
          plVar10[6] = (longlong)iVar20 * 0x20 + lVar21;
          (**(code **)(*(longlong *)plVar10[8] + 8))((longlong *)plVar10[8],plVar10);
          lVar26 = lVar26 + 1;
        } while ((int)lVar26 < (int)local_c0);
      }
      puVar7 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar7 = local_118;
      }
    }
LAB_144021342:
    if (puVar7 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar20 = (int)param_3[0x10];
    if (iVar20 == 0) {
      uVar29 = 1;
      iVar23 = 0;
      uVar32 = 0;
      iVar28 = 0;
    }
    else {
      puVar8 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar8 = (uint *)(param_3 + 0xd);
      }
      uVar22 = *puVar8;
      if (uVar22 == 0) {
        iVar28 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar28 = iVar20 + -1;
        }
        uVar32 = 0;
        uVar29 = (ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          uVar29 = uVar32;
        }
        iVar23 = 0;
        do {
          if (uVar29 == uVar32) goto LAB_14402134c;
          iVar23 = iVar23 + 0x20;
          uVar22 = puVar8[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar22 == 0);
      }
      else {
        iVar23 = 0;
        uVar32 = 0;
      }
      uVar29 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar29 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar28 = (iVar23 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (iVar20 <= iVar28) {
        iVar28 = iVar20;
      }
    }
    puVar25 = (uint *)0x1;
    if (iVar28 == iVar20) goto LAB_14402134e;
    uVar22 = 0xffffffff;
    local_238 = (uint *)(param_3 + 0xd);
    do {
      lVar26 = local_210[0xb];
      lVar21 = (longlong)iVar28 * 200;
      FUN_1403257c8(param_2[0xd],lVar21 + lVar26 + 8);
      FUN_1403257c8(param_2[0xd],lVar21 + lVar26 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar26 + lVar21 + 0xb0);
      }
      uVar22 = uVar22 & ~(uint)uVar29;
      puVar8 = (uint *)local_210[0xf];
      if ((uint *)local_210[0xf] == (uint *)0x0) {
        puVar8 = local_238;
      }
      iVar14 = (int)local_210[0x10];
      iVar28 = (int)uVar32;
      lVar26 = (longlong)iVar28;
      uVar17 = puVar8[lVar26] & uVar22;
      if (uVar17 == 0) {
        iVar12 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar12 = iVar14 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar28) {
          iVar13 = iVar28;
        }
        if (iVar28 < iVar12) {
          lVar21 = 0;
          do {
            uVar17 = puVar8[lVar26 + lVar21 + 1];
            if (uVar17 != 0) {
              uVar32 = (ulonglong)(iVar28 + (int)lVar21 + 1);
              uVar22 = 0xffffffff;
              goto LAB_14401faf5;
            }
            iVar23 = iVar23 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar13 - lVar26 != lVar21);
          uVar22 = 0xffffffff;
          iVar28 = iVar13;
        }
        uVar32 = (ulonglong)(iVar28 + 1);
        iVar28 = iVar14;
      }
      else {
LAB_14401faf5:
        uVar29 = (ulonglong)(-uVar17 & uVar17);
        uVar1 = uVar29 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar28 = (iVar23 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar28) {
          iVar28 = iVar14;
        }
      }
    } while (iVar28 != iVar20);
  }
LAB_14402134c:
  puVar25 = (uint *)0x1;
LAB_14402134e:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar25;
  while( true ) {
    iVar20 = iVar20 + 0x20;
    uVar22 = puVar25[uVar32 + 1];
    uVar32 = uVar32 + 1;
    if (uVar22 != 0) break;
LAB_14401ff95:
    if (uVar29 == uVar32) goto LAB_1440202e0;
  }
LAB_14401ffae:
  uVar29 = (ulonglong)(-uVar22 & uVar22);
  uVar1 = uVar29 * 2 + 1;
  lVar26 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  uVar22 = (iVar20 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
  if ((int)uVar17 <= (int)uVar22) {
    uVar22 = uVar17;
  }
LAB_14401ffe4:
  if ((int)uVar22 < (int)uVar17) {
    local_1e0 = puVar15 + 0x16;
    uVar17 = 0xffffffff;
    local_228 = (longlong *)((ulonglong)local_228 & 0xffffffff00000000);
    local_238 = puVar18;
    do {
      plVar16 = local_230;
      puVar30 = (ulonglong *)((longlong)(int)uVar22 * 0x10 + *(longlong *)puVar18);
      cVar5 = (**(code **)(*(longlong *)local_230[4] + 0x330))((longlong *)local_230[4],puVar30,0);
      if (cVar5 == '\0') {
        puVar19 = puVar30;
        lVar26 = (**(code **)(*(longlong *)plVar16[4] + 800))((longlong *)plVar16[4],puVar30);
        puVar18 = local_238;
        if (lVar26 != 0) {
          local_228 = (longlong *)
                      CONCAT44(local_228._4_4_,(int)CONCAT71((int7)((ulonglong)puVar19 >> 8),1));
          if ((*puVar30 & 1) == 0 && *puVar30 != 0) {
            FUN_140325a06(local_1e0,&local_108,puVar30,0);
          }
          goto LAB_144020089;
        }
      }
      else {
LAB_144020089:
        puVar18 = local_238;
        FUN_140646052(local_238,uVar22);
      }
      plVar16 = local_230;
      uVar17 = uVar17 & ~(uint)uVar29;
      puVar8 = *(uint **)(puVar18 + 8);
      if (*(uint **)(puVar18 + 8) == (uint *)0x0) {
        puVar8 = puVar15 + 6;
      }
      uVar24 = puVar18[10];
      iVar28 = (int)uVar32;
      lVar26 = (longlong)iVar28;
      uVar22 = puVar8[lVar26] & uVar17;
      if (uVar22 == 0) {
        iVar23 = uVar24 + 0x1e;
        if (-1 < (int)(uVar24 - 1)) {
          iVar23 = uVar24 - 1;
        }
        iVar23 = iVar23 >> 5;
        iVar14 = iVar23;
        if (iVar23 < iVar28) {
          iVar14 = iVar28;
        }
        if (iVar23 <= iVar28) break;
        lVar21 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar22 = puVar8[lVar26 + lVar21 + 1];
          if (uVar22 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar14 - lVar26 == lVar21) goto LAB_144020131;
        }
        uVar32 = (ulonglong)(iVar28 + (int)lVar21 + 1);
        uVar17 = 0xffffffff;
      }
      uVar29 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar29 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar22 = (iVar20 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    } while ((int)uVar22 < (int)uVar24);
LAB_144020131:
    puVar8 = local_1c8;
    if (((ulonglong)local_228 & 1) != 0) {
      *(undefined1 *)((longlong)local_230 + 0x49) = 1;
      if (*(char *)((longlong)local_230 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_230[0xb] + 0x210))();
        *(undefined1 *)((longlong)plVar16 + 0x4a) = 1;
        puVar18 = local_238;
      }
      uVar29 = local_120;
      if ((int)local_210[1] != *(int *)((longlong)local_210 + 0x34)) {
        plVar10 = (longlong *)local_210[8];
        if ((longlong *)local_210[8] == (longlong *)0x0) {
          plVar10 = local_1c0;
        }
        iVar20 = *(int *)((longlong)plVar10 + (ulonglong)((int)local_210[9] - 1U & local_1cc) * 4);
        if (iVar20 != -1) {
          do {
            lVar26 = *local_210 + (longlong)iVar20 * 0x10;
            if (*(uint *)(*local_210 + (longlong)iVar20 * 0x10) == local_1cc) goto LAB_1440201bc;
            iVar20 = *(int *)(lVar26 + 8);
          } while (iVar20 != -1);
        }
      }
      lVar26 = 0;
LAB_1440201bc:
      iVar20 = *(int *)(lVar26 + 4);
      lVar26 = *local_1e8;
      lVar21 = (longlong)(int)local_120;
      uVar22 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar22);
      if (local_120._4_4_ < uVar22) {
        FUN_1400cc390(&local_148,uVar29 & 0xffffffff);
        puVar18 = local_238;
      }
      puVar7 = local_128;
      if (local_128 == (undefined4 *)0x0) {
        puVar7 = &local_148;
      }
      puVar7[lVar21] = iVar20;
      FUN_1448fcc30(&local_108,plVar16[4],*(undefined8 *)(puVar18 + 0x28),
                    (longlong)(int)puVar18[0x2c]);
      plVar16[7] = local_1d8;
      plVar16[6] = (longlong)iVar20 * 0x20 + lVar26;
      plVar16[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)plVar16[8] + 8))((longlong *)plVar16[8],plVar16);
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      puVar8 = local_1c8;
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar16 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar16);
      }
      lVar26 = local_90;
      puVar18 = local_238;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar26);
        puVar18 = local_238;
      }
    }
  }
LAB_1440202e0:
  uVar22 = (uint)local_1f8;
  param_3 = local_210;
  puVar25 = local_220;
  iVar28 = (int)local_1f0;
  if ((puVar18[2] == puVar18[0xd]) && (uVar29 = local_1f8, puVar18[0x16] == puVar18[0x21])) {
LAB_14402030a:
    uVar22 = (uint)uVar29;
    FUN_1456fd4bc(local_218,(ulonglong)local_200 & 0xffffffff);
  }
  uVar22 = (uint)local_208 & ~uVar22;
  puVar15 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar15 = puVar8;
  }
  iVar20 = (int)param_3[0x10];
  iVar23 = (int)puVar25;
  lVar26 = (longlong)iVar23;
  uVar17 = puVar15[lVar26] & uVar22;
  if (uVar17 == 0) {
    iVar14 = iVar20 + 0x1e;
    if (-1 < iVar20 + -1) {
      iVar14 = iVar20 + -1;
    }
    iVar14 = iVar14 >> 5;
    iVar12 = iVar14;
    if (iVar14 < iVar23) {
      iVar12 = iVar23;
    }
    if (iVar14 <= iVar23) goto LAB_144020419;
    lVar21 = 0;
    while( true ) {
      iVar28 = iVar28 + 0x20;
      uVar17 = puVar15[lVar26 + lVar21 + 1];
      if (uVar17 != 0) break;
      lVar21 = lVar21 + 1;
      if (iVar12 - lVar26 == lVar21) goto LAB_144020419;
    }
    puVar25 = (uint *)(ulonglong)(iVar23 + (int)lVar21 + 1);
    uVar22 = 0xffffffff;
  }
  uVar29 = (ulonglong)(-uVar17 & uVar17);
  uVar32 = uVar29 * 2 + 1;
  lVar26 = 0x3f;
  if (uVar32 != 0) {
    for (; uVar32 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  iVar23 = (iVar28 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
  if (iVar20 <= iVar23) goto LAB_144020419;
  goto LAB_14401fe9c;
}



// FUNCTION 144021382 FUN_144021382 body=320 status=ok
// SIG undefined FUN_144021382(void)

undefined8 FUN_144021382(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      lVar1 = lVar9 + param_2;
      FUN_140cae46a(lVar1,param_3 + lVar9);
      lVar8 = param_3 + lVar9;
      lVar2 = param_2 + 0x58 + lVar9;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar8 + 0x50);
      FUN_140cae504(lVar2,lVar8 + 0x58);
      FUN_140cae59e(lVar1 + 0xa8,param_3 + lVar9 + 0xa8);
      uVar5 = *(undefined4 *)(lVar8 + 0xfc);
      uVar6 = *(undefined4 *)(lVar8 + 0x100);
      uVar7 = *(undefined4 *)(lVar8 + 0x104);
      *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(lVar8 + 0xf8);
      *(undefined4 *)(lVar2 + 0xa4) = uVar5;
      *(undefined4 *)(lVar2 + 0xa8) = uVar6;
      *(undefined4 *)(lVar2 + 0xac) = uVar7;
      *(undefined8 *)(lVar2 + 0xad) = *(undefined8 *)(lVar8 + 0x105);
      if (param_2 != param_3) {
        iVar3 = *(int *)(param_3 + 0x118 + lVar9);
        uVar4 = *(undefined8 *)(param_3 + 0x110 + lVar9);
        *(int *)(param_2 + 0x118 + lVar9) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x11c + lVar9) == 0) {
          *(undefined4 *)(param_2 + 0x11c + lVar9) = 0;
        }
        else {
          puVar10 = (undefined8 *)(lVar9 + param_2 + 0x110);
          FUN_144022d0a(puVar10,iVar3);
          FUN_144022dde(*puVar10,uVar4,iVar3);
        }
      }
      lVar8 = *(longlong *)(param_3 + 0x120 + lVar9);
      if (DAT_14c950c29 == '\x01') {
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar8 = *(longlong *)(param_3 + 0x120 + lVar9);
        }
      }
      *(longlong *)(lVar1 + 0x120) = lVar8;
      lVar9 = lVar9 + 0x128;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1440214ea FUN_1440214ea body=59 status=ok
// SIG undefined FUN_1440214ea(void)

undefined8 FUN_1440214ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144021536 FUN_144021536 body=55 status=ok
// SIG undefined FUN_144021536(void)

void FUN_144021536(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    if (*(longlong *)(param_2 + 0x110) != 0) {
      FUN_1400020a8();
    }
    FUN_1409def00(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 144021dfa FUN_144021dfa body=225 status=ok
// SIG undefined FUN_144021dfa(void)

void FUN_144021dfa(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x20) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x20;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144021edc FUN_144021edc body=748 status=ok
// SIG undefined FUN_144021edc(void)

bool FUN_144021edc(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar6 + 0x54);
  if (iVar3 != param_2) goto LAB_1440221b4;
  iVar11 = *(int *)(lVar6 + 0x104);
  iVar10 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar11 != iVar10 || iVar11 == -1) || (iVar10 = iVar11, *(int *)(lVar6 + 0x108) == -1)) {
    *(int *)(lVar6 + 0x104) = iVar10;
    lVar6 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar6 == 0) {
      iVar11 = 0;
    }
    else {
      lVar12 = 0;
      iVar11 = 0;
      do {
        iVar11 = iVar11 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x20;
      } while (lVar6 * 0x20 != lVar12);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar11;
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar6 + 0x18);
  if (lVar12 != 0) {
    plVar8 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar8 == (longlong *)0x0) {
LAB_1440220ce:
      uVar9 = 0;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar11 = (int)plVar8[1];
      do {
        if (iVar11 == 0) goto LAB_1440220ce;
        LOCK();
        iVar10 = (int)plVar8[1];
        bVar14 = iVar11 == iVar10;
        if (bVar14) {
          *(int *)(plVar8 + 1) = iVar11 + 1;
          iVar10 = iVar11;
        }
        iVar11 = iVar10;
        UNLOCK();
      } while (!bVar14);
      uVar9 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar9;
    plVar13 = (longlong *)puVar4[1];
    if (plVar8 == plVar13) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar11 = *piVar2;
          UNLOCK();
          plVar13 = plVar8;
          goto joined_r0x00014402211d;
        }
      }
    }
    else {
      puVar4[1] = plVar8;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar11 = *piVar2;
          UNLOCK();
joined_r0x00014402211d:
          if (iVar11 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_1440221b4;
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = &PTR_FUN_14ab190a0;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x54) = 0;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xd) = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar6 + 0x10);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ab190c0;
  plVar8[2] = (longlong)puVar7;
  if (puVar7 == (undefined8 *)0x0) {
LAB_1440220a7:
    *puVar4 = puVar7;
    plVar13 = (longlong *)puVar4[1];
    if (plVar8 == plVar13) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar11 = *piVar2;
          UNLOCK();
          plVar13 = plVar8;
          goto joined_r0x00014402216c;
        }
      }
    }
    else {
      puVar4[1] = plVar8;
      if (plVar13 != (longlong *)0x0) goto LAB_14402218b;
    }
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      puVar7[1] = puVar7;
      if ((longlong *)puVar7[2] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar7[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar7[2] = plVar8;
      }
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_1440220a7;
    }
    puVar7[1] = puVar7;
    *puVar4 = puVar7;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_14402218b:
      LOCK();
      plVar8 = plVar13 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar11 = *piVar2;
        UNLOCK();
joined_r0x00014402216c:
        if (iVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar7 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_1440221b4:
  return iVar3 != param_2;
}



// FUNCTION 1440221c8 FUN_1440221c8 body=231 status=ok
// SIG undefined FUN_1440221c8(void)

void FUN_1440221c8(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440222b0 FUN_1440222b0 body=1066 status=ok
// SIG undefined FUN_1440222b0(void)

void FUN_1440222b0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1];
  iVar11 = 0;
  iVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar13 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + (uint)(byte)(*(int *)(*plVar2 + lVar13) != -1 |
                                  *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar13 = lVar13 + 0x20;
    } while ((longlong)iVar3 << 5 != lVar13);
  }
  if (param_3 != (longlong *)0x0) {
    iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar11 = iVar11 - iVar9;
  local_80 = param_2;
  if (0 < iVar3) {
    local_78 = param_3 + 7;
    lVar13 = 0;
    do {
      iVar3 = *(int *)(*plVar2 + lVar13 * 0x20);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar3 != -1)) {
        puVar15 = (uint *)(*plVar2 + lVar13 * 0x20);
        if (iVar3 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar15);
        }
        local_60 = puVar15;
        local_58 = puVar15 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar12 = *puVar15;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar2 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar2 = local_78;
          }
          iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_3[9] - 1U & uVar12) * 4);
          if (iVar3 != -1) {
            do {
              lVar10 = *param_3 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar3 * 0x10) == uVar12) {
                if ((uint *)(lVar10 + 4) != (uint *)0x0 && lVar10 != 0) {
                  if (*(uint *)(lVar10 + 4) != puVar15[1]) {
                    iVar3 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar3 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
                      FUN_14593fc44(param_4,iVar3);
                    }
                    lVar10 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar10 = param_4;
                    }
                    *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) =
                         ((ulonglong)uVar12 << 0x20) + lVar13;
                  }
                  goto LAB_144022426;
                }
                break;
              }
              iVar3 = *(int *)(lVar10 + 8);
            } while (iVar3 != -1);
          }
        }
        iVar3 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
          FUN_14593fc44(param_4,iVar3);
        }
        lVar10 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar10 = param_4;
        }
        *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) = ((ulonglong)uVar12 << 0x20) + lVar13;
        iVar11 = iVar11 + 1;
      }
LAB_144022426:
      lVar13 = lVar13 + 1;
      plVar2 = *(longlong **)(param_1 + 8);
    } while (lVar13 < (int)plVar2[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar11)) {
    puVar15 = (uint *)(param_3 + 2);
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar8 = puVar15;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_1440226a9;
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      local_68 = local_80 + 7;
      uVar12 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar13 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar5 = *(uint *)(lVar13 + (longlong)iVar4 * 0x10);
          plVar2 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar2 = local_68;
          }
          iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)local_80[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_144022614;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *local_80 + 8);
            } while (iVar6 != -1);
          }
        }
        iVar3 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar3 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar9);
          FUN_1400cc390(param_5,iVar3);
          param_3 = local_70;
          iVar9 = (int)local_78;
        }
        lVar10 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar10 = param_5;
        }
        *(undefined4 *)(lVar10 + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar13 + (longlong)iVar4 * 0x10);
        if (iVar11 < 2) break;
        iVar11 = iVar11 + -1;
        iVar3 = (int)param_3[5];
LAB_144022614:
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar8 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar8 = puVar15;
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar13 == lVar10) goto LAB_1440226a9;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
  }
LAB_1440226a9:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440226dc FUN_1440226dc body=496 status=ok
// SIG undefined FUN_1440226dc(void)

void FUN_1440226dc(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440228ce FUN_1440228ce body=723 status=ok
// SIG undefined FUN_1440228ce(void)

undefined8 FUN_1440228ce(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_144022b2f;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_144022b2f:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 144022bf4 FUN_144022bf4 body=30 status=ok
// SIG undefined FUN_144022bf4(void)

void FUN_144022bf4(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 144022c12 FUN_144022c12 body=248 status=ok
// SIG undefined FUN_144022c12(void)

void FUN_144022c12(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144022d0a FUN_144022d0a body=212 status=ok
// SIG undefined FUN_144022d0a(void)

void FUN_144022d0a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 144022dde FUN_144022dde body=115 status=ok
// SIG undefined FUN_144022dde(void)

void FUN_144022dde(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar3) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 8 + lVar3) = 0xffffffff;
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x10 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined4 *)(param_1 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144023092 FUN_144023092 body=158 status=ok
// SIG undefined FUN_144023092(void)

void FUN_144023092(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x108);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b6538b0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  *(undefined1 *)(param_2 + 0xd) = 1;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x17) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0xc1) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined2 *)(param_2 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_2 + 0x101) = 0;
  *(undefined8 *)((longlong)param_2 + 0x109) = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 144023148 FUN_144023148 body=57 status=ok
// SIG undefined FUN_144023148(void)

void FUN_144023148(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3778 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3778 = FUN_140002ddd(FUN_1465b96d6,uVar1,L"GbxSkillTokenStackDef");
  }
  return;
}



// FUNCTION 144023190 FUN_144023190 body=57 status=ok
// SIG undefined FUN_144023190(void)

void FUN_144023190(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3790 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3790 = FUN_140002ddd(FUN_1465b9c6e,uVar1,L"GbxSkillTokenStackProvider");
  }
  return;
}



// FUNCTION 14402323e FUN_14402323e body=29 status=ok
// SIG undefined FUN_14402323e(void)

undefined8 FUN_14402323e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402326a FUN_14402326a body=154 status=ok
// SIG undefined FUN_14402326a(void)

void FUN_14402326a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *param_2 = &PTR_FUN_14b284200;
  *(undefined1 *)((longlong)param_2 + 9) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_2 + 5) = local_40;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_3c;
  *(undefined4 *)(param_2 + 6) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_34;
  *param_2 = &PTR_FUN_14b652b20;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144023306 FUN_144023306 body=136 status=ok
// SIG undefined FUN_144023306(void)

void FUN_144023306(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b284200;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_2 + 5) = local_40;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_3c;
  *(undefined4 *)(param_2 + 6) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_34;
  *param_2 = &PTR_FUN_14b652b20;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440233b4 FUN_1440233b4 body=91 status=ok
// SIG undefined FUN_1440233b4(void)

undefined8 FUN_1440233b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined2 *)(param_2 + -0x30) = *(undefined2 *)(param_3 + -0x30);
      FUN_1401f3db8(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_14870773e(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144023438 FUN_144023438 body=59 status=ok
// SIG undefined FUN_144023438(void)

undefined8 FUN_144023438(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14402347e FUN_14402347e body=76 status=ok
// SIG undefined FUN_14402347e(void)

void FUN_14402347e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b284200;
    plVar3 = (longlong *)param_2[3];
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
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 144023518 FUN_144023518 body=85 status=ok
// SIG undefined FUN_144023518(void)

undefined8 * FUN_144023518(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b284200;
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



// FUNCTION 14402356e FUN_14402356e body=55 status=ok
// SIG undefined FUN_14402356e(void)

void FUN_14402356e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba38a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba38a0 =
         FUN_140002ddd(FUN_14401dd4f,uVar1,L"GbxStatusEffectAspectData_CorpoHacker_Contagion");
  }
  return;
}



// FUNCTION 1440235ce FUN_1440235ce body=2615 status=ok
// SIG undefined FUN_1440235ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440235ce(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba31b8 = (ulonglong)uVar2;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6499a0,1,&PTR_FUN_14b649950);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b64a310,1,&PTR_FUN_14b64a290);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64a4a0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64a580);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b64a770;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64a790);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64a980);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64aac0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64aba0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b64ae10;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64ae30);
  _DAT_14cba3380 = 0x47efffffe0000000;
  _DAT_14cba3388 = 0x47efffffe0000000;
  _DAT_14cba3390 = 0x47efffffe0000000;
  _DAT_14cba3398 = 0x47efffffe0000000;
  _DAT_14cba33a0 = 0x47efffffe0000000;
  _DAT_14cba33a8 = 0x47efffffe0000000;
  _DAT_14cba33b0 = 0x47efffffe0000000;
  _DAT_14cba33b8 = 0x47efffffe0000000;
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "Use";
  local_48 = 3;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba33c0 = (ulonglong)uVar2;
  local_50 = "Sight";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba33c8 = (ulonglong)uVar2;
  local_50 = "TargetLock";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba33d0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba33d8);
  if (cVar1 == '\0') {
    _DAT_14cba33d8 = 0;
    uRam000000014cba33e0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cba33ec = 0;
  FUN_14052b5e0(&DAT_14cba33e8,"PlayerAwareness",0);
  _DAT_14cba33f8 = "PlayerAwareness";
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3400 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3408 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3410 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3418 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3420 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3428 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3430 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3438 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3440 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3448 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3450 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3458 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3460 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3468 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3470 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3478 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3480 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3488 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3490 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cba3498,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14401dae4);
  FUN_140056680(&DAT_14cba34a8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14401daf5);
  FUN_140056680(&DAT_14cba34b8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14401db06);
  FUN_140056680(&DAT_14cba34c8,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14401db17);
  FUN_1446f470e(&DAT_14cba34d8,L"LIMB_GORED",1);
  _DAT_14cba34e0 = 0x4072c00000000000;
  _DAT_14cba34e8 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cba34f0,L"body",1);
  FUN_1446f470e(&DAT_14cba34f8,L"title_card",1);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64afc0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b64b270;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64b290);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64b370);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b64ba20;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64ba40);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64bc60);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64bd70);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64be50);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64c050);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64c180);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64c430);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64c530);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64c620);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64c720);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64c810);
  local_60 = &PTR_FUN_14b64cf30;
  local_68 = 1;
  uStack_58 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64cfd0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b64d9f0,1,&PTR_FUN_14b64d9c0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b64dde0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64de00);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64e0f0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b64e530;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64e550);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b64e6b0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144024008 FUN_144024008 body=55 status=ok
// SIG undefined FUN_144024008(void)

void FUN_144024008(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba38d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba38d0 = FUN_14171c317(FUN_1465ba6c4,uVar1,L"EStatusEffectMovePentaltyType");
  }
  return;
}



// FUNCTION 14402403f FUN_14402403f body=55 status=ok
// SIG undefined FUN_14402403f(void)

void FUN_14402403f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3bc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3bc8 = FUN_14171c317(FUN_1465baf7b,uVar1,L"EStasisRigidificationOnEnd");
  }
  return;
}



// FUNCTION 144024076 FUN_144024076 body=55 status=ok
// SIG undefined FUN_144024076(void)

void FUN_144024076(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3c70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3c70 = FUN_14171c317(FUN_1465bb255,uVar1,L"EUnlockableItemMovementType");
  }
  return;
}



// FUNCTION 1440240ad FUN_1440240ad body=55 status=ok
// SIG undefined FUN_1440240ad(void)

void FUN_1440240ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3db0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3db0 = FUN_14171c317(FUN_1465bb4dc,uVar1,L"EGimmeExperienceComparison");
  }
  return;
}



// FUNCTION 144024100 FUN_144024100 body=57 status=ok
// SIG undefined FUN_144024100(void)

void FUN_144024100(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba38e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba38e8 = FUN_140002ddd(FUN_1465ba6f3,uVar1,L"GbxStatusEffectAspectData_Slow");
  }
  return;
}



// FUNCTION 144024218 FUN_144024218 body=57 status=ok
// SIG undefined FUN_144024218(void)

void FUN_144024218(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e28 = FUN_140002ddd(FUN_1465bb79b,uVar1,L"GpsGeneratorSettings_LootableObjects");
  }
  return;
}



// FUNCTION 14402427c FUN_14402427c body=120 status=ok
// SIG undefined FUN_14402427c(void)

void FUN_14402427c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14b65c2e0;
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1440242f4 FUN_1440242f4 body=123 status=ok
// SIG undefined FUN_1440242f4(void)

undefined8 * FUN_1440242f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b65c2e0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402437e FUN_14402437e body=57 status=ok
// SIG undefined FUN_14402437e(void)

void FUN_14402437e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e88 = FUN_140002ddd(FUN_1465bb9bd,uVar1,L"GpsTestSettings_CanRevive");
  }
  return;
}



// FUNCTION 1440243c6 FUN_1440243c6 body=57 status=ok
// SIG undefined FUN_1440243c6(void)

void FUN_1440243c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ea0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ea0 = FUN_140002ddd(FUN_1465bba1c,uVar1,L"GpsTest_CanRevive");
  }
  return;
}



// FUNCTION 1440243ff FUN_1440243ff body=2505 status=ok
// SIG undefined FUN_1440243ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440243ff(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b653aa0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b653cc0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b653ce0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b653ed0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b653fb0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b654390,1,0);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3940 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cba3948,L"SkipStartAnimation",1);
  FUN_1446f470e(&DAT_14cba3950,L"OnHitWall_Const",1);
  FUN_1446f470e(&DAT_14cba3960,L"OnHitWall_Mut",1);
  FUN_1446f470e(&DAT_14cba3970,L"OnLoop_Const",1);
  FUN_1446f470e(&DAT_14cba3980,L"OnLoop_Mut",1);
  FUN_1446f470e(&DAT_14cba3990,L"OnLoopRep_Const",1);
  FUN_1446f470e(&DAT_14cba39a0,L"OnLoopRep_Mut",1);
  FUN_1446f470e(&DAT_14cba39b0,L"OnMiss_Const",1);
  FUN_1446f470e(&DAT_14cba39c0,L"OnMiss_Mut",1);
  FUN_1446f470e(&DAT_14cba39d0,L"OnReachCliff_Const",1);
  FUN_1446f470e(&DAT_14cba39e0,L"OnReachCliff_Mut",1);
  FUN_1446f470e(&DAT_14cba39f0,L"OnStopForFriendly_Const",1);
  FUN_1446f470e(&DAT_14cba3a00,L"OnStopForFriendly_Mut",1);
  FUN_1446f470e(&DAT_14cba3a10,L"OnStrike_Const",1);
  FUN_1446f470e(&DAT_14cba3a20,L"OnStrike_Mut",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6555f0,2,0);
  FUN_1446f470e(&DAT_14cba3a60,L"AnimValue",1);
  FUN_1446f470e(&DAT_14cba3a68,L"AllowMovementDuringStart",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b655b10,2,0);
  FUN_1446f470e(&DAT_14cba3aa0,L"OnTargetLockEnded",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6561b0,2,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6566b0,1,&PTR_FUN_14b656680);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b656760,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6569b0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b657070,1,&PTR_FUN_14b657040);
  _DAT_14cba3b70 = 0x47efffffe0000000;
  _DAT_14cba3b78 = 0x47efffffe0000000;
  _DAT_14cba3b80 = 0x47efffffe0000000;
  _DAT_14cba3b88 = 0x47efffffe0000000;
  _DAT_14cba3b90 = 0x47efffffe0000000;
  _DAT_14cba3b98 = 0x47efffffe0000000;
  _DAT_14cba3ba0 = 0x47efffffe0000000;
  _DAT_14cba3ba8 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cba3be8,L"OnFlingEnded",1);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b6587a0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6587c0,3,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b658a90;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b658ab0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba3c98);
  if (cVar1 == '\0') {
    _DAT_14cba3c98 = 0;
    uRam000000014cba3ca0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cba3cac = 0;
  FUN_14052b5e0(&DAT_14cba3ca8,"PlayerAwareness",0);
  _DAT_14cba3cb8 = "PlayerAwareness";
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3cc0 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3cc8 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3cd0 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3cd8 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3ce0 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3ce8 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3cf0 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3cf8 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d00 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d08 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d10 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d18 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d20 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d28 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d30 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d38 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d40 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d48 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3d50 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cba3d58,L"UNSET",1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b658c20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b658d80);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b658ee0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b6591a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6591c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6596e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6598e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b659ec0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b65a060);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144024dcc FUN_144024dcc body=55 status=ok
// SIG undefined FUN_144024dcc(void)

void FUN_144024dcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4068 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4068 = FUN_14171c317(FUN_1465bc686,uVar1,L"EGrappleDestinationType");
  }
  return;
}



// FUNCTION 144024e03 FUN_144024e03 body=55 status=ok
// SIG undefined FUN_144024e03(void)

void FUN_144024e03(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4080 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4080 = FUN_14171c317(FUN_1465bc6b5,uVar1,L"EGrappleNotify");
  }
  return;
}



// FUNCTION 144024e3a FUN_144024e3a body=55 status=ok
// SIG undefined FUN_144024e3a(void)

void FUN_144024e3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4098 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4098 = FUN_14171c317(FUN_1465bc6e4,uVar1,L"EGrappleState");
  }
  return;
}



// FUNCTION 144024e71 FUN_144024e71 body=55 status=ok
// SIG undefined FUN_144024e71(void)

void FUN_144024e71(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba40f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba40f8 = FUN_14171c317(FUN_1465bc873,uVar1,L"EGrappleValidity");
  }
  return;
}



// FUNCTION 144024ea8 FUN_144024ea8 body=55 status=ok
// SIG undefined FUN_144024ea8(void)

void FUN_144024ea8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4238 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4238 = FUN_14171c317(FUN_1465bcf0b,uVar1,L"EGrappleTravelPhase");
  }
  return;
}



// FUNCTION 144024ee4 FUN_144024ee4 body=48 status=ok
// SIG undefined FUN_144024ee4(void)

longlong FUN_144024ee4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144024f14 FUN_144024f14 body=48 status=ok
// SIG undefined FUN_144024f14(void)

longlong FUN_144024f14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144024f44 FUN_144024f44 body=48 status=ok
// SIG undefined FUN_144024f44(void)

longlong FUN_144024f44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144024f74 FUN_144024f74 body=48 status=ok
// SIG undefined FUN_144024f74(void)

longlong FUN_144024f74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144024fa4 FUN_144024fa4 body=48 status=ok
// SIG undefined FUN_144024fa4(void)

longlong FUN_144024fa4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144024fd4 FUN_144024fd4 body=48 status=ok
// SIG undefined FUN_144024fd4(void)

longlong FUN_144024fd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025004 FUN_144025004 body=48 status=ok
// SIG undefined FUN_144025004(void)

longlong FUN_144025004(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025034 FUN_144025034 body=48 status=ok
// SIG undefined FUN_144025034(void)

longlong FUN_144025034(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025064 FUN_144025064 body=48 status=ok
// SIG undefined FUN_144025064(void)

longlong FUN_144025064(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025094 FUN_144025094 body=48 status=ok
// SIG undefined FUN_144025094(void)

longlong FUN_144025094(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440250c4 FUN_1440250c4 body=48 status=ok
// SIG undefined FUN_1440250c4(void)

longlong FUN_1440250c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440250f4 FUN_1440250f4 body=48 status=ok
// SIG undefined FUN_1440250f4(void)

longlong FUN_1440250f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025124 FUN_144025124 body=48 status=ok
// SIG undefined FUN_144025124(void)

longlong FUN_144025124(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025154 FUN_144025154 body=48 status=ok
// SIG undefined FUN_144025154(void)

longlong FUN_144025154(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025184 FUN_144025184 body=48 status=ok
// SIG undefined FUN_144025184(void)

longlong FUN_144025184(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440251b4 FUN_1440251b4 body=48 status=ok
// SIG undefined FUN_1440251b4(void)

longlong FUN_1440251b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440251e4 FUN_1440251e4 body=48 status=ok
// SIG undefined FUN_1440251e4(void)

longlong FUN_1440251e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025214 FUN_144025214 body=48 status=ok
// SIG undefined FUN_144025214(void)

longlong FUN_144025214(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025244 FUN_144025244 body=48 status=ok
// SIG undefined FUN_144025244(void)

longlong FUN_144025244(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025274 FUN_144025274 body=48 status=ok
// SIG undefined FUN_144025274(void)

longlong FUN_144025274(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440252a4 FUN_1440252a4 body=48 status=ok
// SIG undefined FUN_1440252a4(void)

longlong FUN_1440252a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440252d4 FUN_1440252d4 body=48 status=ok
// SIG undefined FUN_1440252d4(void)

longlong FUN_1440252d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025304 FUN_144025304 body=48 status=ok
// SIG undefined FUN_144025304(void)

longlong FUN_144025304(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025334 FUN_144025334 body=48 status=ok
// SIG undefined FUN_144025334(void)

longlong FUN_144025334(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025364 FUN_144025364 body=48 status=ok
// SIG undefined FUN_144025364(void)

longlong FUN_144025364(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025394 FUN_144025394 body=48 status=ok
// SIG undefined FUN_144025394(void)

longlong FUN_144025394(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440253c4 FUN_1440253c4 body=48 status=ok
// SIG undefined FUN_1440253c4(void)

longlong FUN_1440253c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440253f4 FUN_1440253f4 body=48 status=ok
// SIG undefined FUN_1440253f4(void)

longlong FUN_1440253f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025424 FUN_144025424 body=48 status=ok
// SIG undefined FUN_144025424(void)

longlong FUN_144025424(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025454 FUN_144025454 body=48 status=ok
// SIG undefined FUN_144025454(void)

longlong FUN_144025454(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025484 FUN_144025484 body=48 status=ok
// SIG undefined FUN_144025484(void)

longlong FUN_144025484(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440254b4 FUN_1440254b4 body=48 status=ok
// SIG undefined FUN_1440254b4(void)

longlong FUN_1440254b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440254e4 FUN_1440254e4 body=48 status=ok
// SIG undefined FUN_1440254e4(void)

longlong FUN_1440254e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025514 FUN_144025514 body=48 status=ok
// SIG undefined FUN_144025514(void)

longlong FUN_144025514(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025544 FUN_144025544 body=48 status=ok
// SIG undefined FUN_144025544(void)

longlong FUN_144025544(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144025574 FUN_144025574 body=48 status=ok
// SIG undefined FUN_144025574(void)

longlong FUN_144025574(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440255fe FUN_1440255fe body=57 status=ok
// SIG undefined FUN_1440255fe(void)

void FUN_1440255fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ee8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ee8 = FUN_140002ddd(FUN_1465bc0e9,uVar1,L"GpsTestSettings_InsideWaterBody");
  }
  return;
}



// FUNCTION 1440256ae FUN_1440256ae body=57 status=ok
// SIG undefined FUN_1440256ae(void)

void FUN_1440256ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f00 = FUN_140002ddd(FUN_1465bc143,uVar1,L"GpsTest_InsideWaterBody");
  }
  return;
}



// FUNCTION 1440256f6 FUN_1440256f6 body=57 status=ok
// SIG undefined FUN_1440256f6(void)

void FUN_1440256f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f18 = FUN_140002ddd(FUN_1465bc1d5,uVar1,L"GpsTestSettings_IsCauser");
  }
  return;
}



// FUNCTION 14402577e FUN_14402577e body=57 status=ok
// SIG undefined FUN_14402577e(void)

void FUN_14402577e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f30 = FUN_140002ddd(FUN_1465bc22f,uVar1,L"GpsTest_IsCauser");
  }
  return;
}



// FUNCTION 1440257c6 FUN_1440257c6 body=57 status=ok
// SIG undefined FUN_1440257c6(void)

void FUN_1440257c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f48 = FUN_140002ddd(FUN_1465bc2c1,uVar1,L"GpsTestSettings_IsFocuser");
  }
  return;
}



// FUNCTION 14402584e FUN_14402584e body=57 status=ok
// SIG undefined FUN_14402584e(void)

void FUN_14402584e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f60 = FUN_140002ddd(FUN_1465bc31b,uVar1,L"GpsTest_IsFocuser");
  }
  return;
}



// FUNCTION 1440258a2 FUN_1440258a2 body=57 status=ok
// SIG undefined FUN_1440258a2(void)

void FUN_1440258a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3fc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3fc0 = FUN_140002ddd(FUN_1465bc421,uVar1,L"GrappleableObjectDef");
  }
  return;
}



// FUNCTION 1440258f6 FUN_1440258f6 body=57 status=ok
// SIG undefined FUN_1440258f6(void)

void FUN_1440258f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3fd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3fd8 = FUN_140002ddd(FUN_1465bc47d,uVar1,L"GrapplePointDef");
  }
  return;
}



// FUNCTION 144025956 FUN_144025956 body=57 status=ok
// SIG undefined FUN_144025956(void)

void FUN_144025956(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ff0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ff0 = FUN_140002ddd(FUN_1465bc4d7,uVar1,L"GrappleGrateDef");
  }
  return;
}



// FUNCTION 1440259b6 FUN_1440259b6 body=57 status=ok
// SIG undefined FUN_1440259b6(void)

void FUN_1440259b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4008 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4008 = FUN_140002ddd(FUN_1465bc531,uVar1,L"GrappleInteractableDef");
  }
  return;
}



// FUNCTION 144025a28 FUN_144025a28 body=115 status=ok
// SIG undefined FUN_144025a28(void)

void FUN_144025a28(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined1 *)((longlong)param_2 + 0x94) = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined1 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)((longlong)param_2 + 0xa4) = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 144025a9c FUN_144025a9c body=240 status=ok
// SIG undefined FUN_144025a9c(void)

undefined8 FUN_144025a9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar2;
      lVar2 = *(longlong *)(param_3 + 8 + lVar4);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar4);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1[1] = lVar2;
      memcpy(plVar1 + 2,(void *)(param_3 + lVar4 + 0x10),0xa4);
      lVar2 = *(longlong *)(param_3 + lVar4 + 0xb8);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 0xb8 + lVar4);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1[0x17] = lVar2;
      lVar4 = lVar4 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144025c66 FUN_144025c66 body=584 status=ok
// SIG undefined FUN_144025c66(void)

void FUN_144025c66(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x390);
  *(undefined4 *)((longlong)param_2 + 0x3c) = 2;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x68) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x70) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x98) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x88) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x90) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0xd0) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = uVar1;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0xf0) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x100) = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  *(undefined4 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x148) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x138) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x140) = uVar1;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x158) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x160) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x168) = DAT_14c8464f0;
  *(undefined1 *)((longlong)param_2 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_2 + 400) = 0;
  *(undefined8 *)((longlong)param_2 + 0x180) = 0;
  *(undefined8 *)((longlong)param_2 + 0x188) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x198) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d8) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x1c8) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x1d0) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x1f0) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x1e0) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x1e8) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x208) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x1f8) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x200) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x230) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x220) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x228) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x248) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x238) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x240) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x270) = 0;
  *(undefined8 *)((longlong)param_2 + 0x260) = 0;
  *(undefined8 *)((longlong)param_2 + 0x268) = 0;
  *(undefined8 *)((longlong)param_2 + 0x250) = 0;
  *(undefined8 *)((longlong)param_2 + 600) = 0;
  *(undefined8 *)((longlong)param_2 + 0x288) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x278) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x280) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x2c9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2d1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x290) = 0;
  *(undefined8 *)((longlong)param_2 + 0x298) = 0;
  *(undefined8 *)((longlong)param_2 + 0x300) = 0;
  *(undefined8 *)((longlong)param_2 + 0x308) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x310) = 2;
  *(undefined4 *)((longlong)param_2 + 900) = 0;
  *(undefined8 *)((longlong)param_2 + 0x374) = 0;
  *(undefined8 *)((longlong)param_2 + 0x37c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x364) = 0;
  *(undefined8 *)((longlong)param_2 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x354) = 0;
  *(undefined8 *)((longlong)param_2 + 0x35c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x344) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x334) = 0;
  *(undefined8 *)((longlong)param_2 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x324) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x314) = 0;
  *(undefined8 *)((longlong)param_2 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x388) = 2;
  return;
}



// FUNCTION 14402615b FUN_14402615b body=643 status=ok
// SIG undefined FUN_14402615b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14402615b(void)

{
  char cVar1;
  uint uVar2;
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
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b65df60);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b65e290);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b65e430);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b65e5d0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cba3f70 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cba3f78);
  if (cVar1 == '\0') {
    _DAT_14cba3f78 = 0;
    uRam000000014cba3f80 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b65e770,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b65eb90,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b65f220);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6607a0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b661830,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6628d0,1,0);
  ppuStack_50 = &PTR_FUN_14b665730;
  uStack_48 = 5;
  local_58 = 0xf;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b665a30,2,&PTR_FUN_14b6657d0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6660a0,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b666810,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440263f2 FUN_1440263f2 body=228 status=ok
// SIG undefined FUN_1440263f2(void)

longlong FUN_1440263f2(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbadd90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459f2e4c;
    local_38 = &LAB_148c39de3;
    local_40 = &LAB_1457a9eb2;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbadd90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440264d7 FUN_1440264d7 body=55 status=ok
// SIG undefined FUN_1440264d7(void)

void FUN_1440264d7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba44c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba44c0 = FUN_14171c317(FUN_1465bdc0a,uVar1,L"EAtt_GrenadeBehaviorPayloadDamageAmp");
  }
  return;
}



// FUNCTION 14402650e FUN_14402650e body=55 status=ok
// SIG undefined FUN_14402650e(void)

void FUN_14402650e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4550 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4550 = FUN_14171c317(FUN_1465bdf2a,uVar1,L"EAtt_GrenadeBehaviorPayloadMirv");
  }
  return;
}



// FUNCTION 144026545 FUN_144026545 body=55 status=ok
// SIG undefined FUN_144026545(void)

void FUN_144026545(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4568 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4568 = FUN_14171c317(FUN_1465bdf59,uVar1,L"EMirvSpawnDirection");
  }
  return;
}



// FUNCTION 14402657c FUN_14402657c body=55 status=ok
// SIG undefined FUN_14402657c(void)

void FUN_14402657c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4580 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4580 = FUN_14171c317(FUN_1465bdf88,uVar1,L"EMirvDamageTrigger");
  }
  return;
}



// FUNCTION 1440265b3 FUN_1440265b3 body=55 status=ok
// SIG undefined FUN_1440265b3(void)

void FUN_1440265b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba45c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba45c8 = FUN_14171c317(FUN_1465be0e4,uVar1,L"EAtt_GrenadeBehaviorPayloadShooting");
  }
  return;
}



// FUNCTION 1440265ea FUN_1440265ea body=55 status=ok
// SIG undefined FUN_1440265ea(void)

void FUN_1440265ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4610 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4610 = FUN_14171c317(FUN_1465be208,uVar1,L"EAtt_GrenadeBehaviorPayloadSingularity");
  }
  return;
}



// FUNCTION 144026627 FUN_144026627 body=55 status=ok
// SIG undefined FUN_144026627(void)

void FUN_144026627(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4688 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4688 = FUN_14171c317(FUN_1465be45a,uVar1,L"EAtt_GrenadeBehaviorPayloadSpring");
  }
  return;
}



// FUNCTION 14402665e FUN_14402665e body=55 status=ok
// SIG undefined FUN_14402665e(void)

void FUN_14402665e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba46d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba46d0 = FUN_14171c317(FUN_1465be57e,uVar1,L"EAtt_GrenadeBehaviorPayloadTargetCombo");
  }
  return;
}



// FUNCTION 144026695 FUN_144026695 body=55 status=ok
// SIG undefined FUN_144026695(void)

void FUN_144026695(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4738 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4738 = FUN_14171c317(FUN_1465be6a2,uVar1,L"EAtt_GrenadeGadget");
  }
  return;
}



// FUNCTION 1440266cc FUN_1440266cc body=48 status=ok
// SIG undefined FUN_1440266cc(void)

longlong FUN_1440266cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440266fc FUN_1440266fc body=48 status=ok
// SIG undefined FUN_1440266fc(void)

longlong FUN_1440266fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402672c FUN_14402672c body=48 status=ok
// SIG undefined FUN_14402672c(void)

longlong FUN_14402672c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402675c FUN_14402675c body=48 status=ok
// SIG undefined FUN_14402675c(void)

longlong FUN_14402675c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440267b4 FUN_1440267b4 body=48 status=ok
// SIG undefined FUN_1440267b4(void)

longlong FUN_1440267b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xbe0;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440267ec FUN_1440267ec body=48 status=ok
// SIG undefined FUN_1440267ec(void)

longlong FUN_1440267ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402681c FUN_14402681c body=48 status=ok
// SIG undefined FUN_14402681c(void)

longlong FUN_14402681c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402684c FUN_14402684c body=48 status=ok
// SIG undefined FUN_14402684c(void)

longlong FUN_14402684c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402687c FUN_14402687c body=48 status=ok
// SIG undefined FUN_14402687c(void)

longlong FUN_14402687c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026930 FUN_144026930 body=48 status=ok
// SIG undefined FUN_144026930(void)

longlong FUN_144026930(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdf8;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026968 FUN_144026968 body=48 status=ok
// SIG undefined FUN_144026968(void)

longlong FUN_144026968(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe00;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440269a8 FUN_1440269a8 body=48 status=ok
// SIG undefined FUN_1440269a8(void)

longlong FUN_1440269a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1068;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440269ee FUN_1440269ee body=48 status=ok
// SIG undefined FUN_1440269ee(void)

longlong FUN_1440269ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1070;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026a26 FUN_144026a26 body=48 status=ok
// SIG undefined FUN_144026a26(void)

longlong FUN_144026a26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026a56 FUN_144026a56 body=48 status=ok
// SIG undefined FUN_144026a56(void)

longlong FUN_144026a56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026a86 FUN_144026a86 body=48 status=ok
// SIG undefined FUN_144026a86(void)

longlong FUN_144026a86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026ab6 FUN_144026ab6 body=48 status=ok
// SIG undefined FUN_144026ab6(void)

longlong FUN_144026ab6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026ae6 FUN_144026ae6 body=48 status=ok
// SIG undefined FUN_144026ae6(void)

longlong FUN_144026ae6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026b16 FUN_144026b16 body=48 status=ok
// SIG undefined FUN_144026b16(void)

longlong FUN_144026b16(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026b46 FUN_144026b46 body=48 status=ok
// SIG undefined FUN_144026b46(void)

longlong FUN_144026b46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026b76 FUN_144026b76 body=48 status=ok
// SIG undefined FUN_144026b76(void)

longlong FUN_144026b76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026ba6 FUN_144026ba6 body=48 status=ok
// SIG undefined FUN_144026ba6(void)

longlong FUN_144026ba6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144026c2c FUN_144026c2c body=57 status=ok
// SIG undefined FUN_144026c2c(void)

void FUN_144026c2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4430 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4430 = FUN_140002ddd(FUN_1465bd958,uVar1,L"GrenadeBehaviorAspect");
  }
  return;
}



// FUNCTION 144026c94 FUN_144026c94 body=57 status=ok
// SIG undefined FUN_144026c94(void)

void FUN_144026c94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4460 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4460 = FUN_140002ddd(FUN_1465bda50,uVar1,L"GrenadeBehaviorDef_Delivery");
  }
  return;
}



// FUNCTION 144026cfa FUN_144026cfa body=57 status=ok
// SIG undefined FUN_144026cfa(void)

void FUN_144026cfa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4478 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4478 = FUN_140002ddd(FUN_1465bdab0,uVar1,L"GrenadeBehavior_Delivery");
  }
  return;
}



// FUNCTION 144026dbc FUN_144026dbc body=57 status=ok
// SIG undefined FUN_144026dbc(void)

void FUN_144026dbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4598 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4598 = FUN_140002ddd(FUN_1465bdfef,uVar1,L"GrenadeBehaviorDef_PayloadMirv");
  }
  return;
}



// FUNCTION 144026f5a FUN_144026f5a body=57 status=ok
// SIG undefined FUN_144026f5a(void)

void FUN_144026f5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4868 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4868 = FUN_140002ddd(FUN_1465bebb7,uVar1,L"GbxUIDisplayDataDef_HoverDrive");
  }
  return;
}



// FUNCTION 144026fe0 FUN_144026fe0 body=57 status=ok
// SIG undefined FUN_144026fe0(void)

void FUN_144026fe0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4880 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4880 = FUN_140002ddd(FUN_1465bec16,uVar1,L"HoverDriveAttributeSetDef");
  }
  return;
}



// FUNCTION 144027040 FUN_144027040 body=57 status=ok
// SIG undefined FUN_144027040(void)

void FUN_144027040(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba48b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba48b0 = FUN_140002ddd(FUN_1465beca5,uVar1,L"HoverDriveDef");
  }
  return;
}



// FUNCTION 144027079 FUN_144027079 body=2590 status=ok
// SIG undefined FUN_144027079(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144027079(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba42c0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cba42c8);
  if (cVar1 == '\0') {
    _DAT_14cba42c8 = 0;
    uRam000000014cba42d0 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cba42d8 = 0x47efffffe0000000;
  _DAT_14cba42e0 = 0x47efffffe0000000;
  _DAT_14cba42e8 = 0x47efffffe0000000;
  _DAT_14cba42f0 = 0x47efffffe0000000;
  _DAT_14cba42f8 = 0x47efffffe0000000;
  _DAT_14cba4300 = 0x47efffffe0000000;
  _DAT_14cba4308 = 0x47efffffe0000000;
  _DAT_14cba4310 = 0x47efffffe0000000;
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4318 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cba4320,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440263e0);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cba4334 = 0;
  FUN_14052b5e0(&DAT_14cba4330,"PlayerAwareness",0);
  _DAT_14cba4340 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4348 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4350 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4358 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4360 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4368 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4370 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4378 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4380 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4388 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4390 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4398 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba43a0 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba43a8 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba43b0 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba43b8 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba43c0 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba43c8 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba43d0 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba43d8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cba43e0,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cba43e8,L"Party",1);
  FUN_1446f470e(&DAT_14cba43f0,&DAT_149e063b2,1);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b66c3f0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66c480);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66c600);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66c730);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66cad0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66cc80);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b66cfb0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66cfd0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66de00);
  local_78 = 3;
  ppuStack_80 = &PTR_FUN_14b66ecf0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66ed50);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b66f140;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66f160);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b66f5d0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66f5f0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b66fab0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b670080;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6700a0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b670510;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b670530);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4710 = (ulonglong)uVar2;
  local_70 = "StopUse";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4718 = (ulonglong)uVar2;
  local_70 = "SecondaryUse";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4720 = (ulonglong)uVar2;
  local_70 = "StopSecondaryUse";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4728 = (ulonglong)uVar2;
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b670d60;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b670db0,1,&PTR_FUN_14b670d80);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4790 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba4798 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba47a0 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b670f10,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b671fe0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b672580,1,&PTR_FUN_14b672530);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b672630);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b673390,2,&PTR_FUN_14b6732f0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144027a98 FUN_144027a98 body=55 status=ok
// SIG undefined FUN_144027a98(void)

void FUN_144027a98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba48e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba48e8 = FUN_14171c317(FUN_1465bf22f,uVar1,L"EPowerslideInput");
  }
  return;
}



// FUNCTION 144027acf FUN_144027acf body=55 status=ok
// SIG undefined FUN_144027acf(void)

void FUN_144027acf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4a30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4a30 = FUN_14171c317(FUN_1465bf815,uVar1,L"EDoorControlStyle");
  }
  return;
}



// FUNCTION 144027b06 FUN_144027b06 body=55 status=ok
// SIG undefined FUN_144027b06(void)

void FUN_144027b06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4bc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4bc0 = FUN_14171c317(FUN_1465bfebc,uVar1,L"EAugmentOwnerType");
  }
  return;
}



// FUNCTION 144027b3d FUN_144027b3d body=55 status=ok
// SIG undefined FUN_144027b3d(void)

void FUN_144027b3d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4c38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4c38 = FUN_14171c317(FUN_1465c0112,uVar1,L"OakDelegateBasedConditionIdentifiers");
  }
  return;
}



// FUNCTION 144027b74 FUN_144027b74 body=55 status=ok
// SIG undefined FUN_144027b74(void)

void FUN_144027b74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4c50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4c50 = FUN_14171c317(FUN_1465c0141,uVar1,L"AugmentConditionalEffectTargetSelection");
  }
  return;
}



// FUNCTION 144027bab FUN_144027bab body=55 status=ok
// SIG undefined FUN_144027bab(void)

void FUN_144027bab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4c98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4c98 = FUN_14171c317(FUN_1465c02a2,uVar1,L"EAddAugmentTokenCondition");
  }
  return;
}



// FUNCTION 144027be2 FUN_144027be2 body=48 status=ok
// SIG undefined FUN_144027be2(void)

longlong FUN_144027be2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027c12 FUN_144027c12 body=48 status=ok
// SIG undefined FUN_144027c12(void)

longlong FUN_144027c12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027c42 FUN_144027c42 body=48 status=ok
// SIG undefined FUN_144027c42(void)

longlong FUN_144027c42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027c72 FUN_144027c72 body=48 status=ok
// SIG undefined FUN_144027c72(void)

longlong FUN_144027c72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027ca2 FUN_144027ca2 body=48 status=ok
// SIG undefined FUN_144027ca2(void)

longlong FUN_144027ca2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027cd2 FUN_144027cd2 body=48 status=ok
// SIG undefined FUN_144027cd2(void)

longlong FUN_144027cd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027d02 FUN_144027d02 body=48 status=ok
// SIG undefined FUN_144027d02(void)

longlong FUN_144027d02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027d32 FUN_144027d32 body=48 status=ok
// SIG undefined FUN_144027d32(void)

longlong FUN_144027d32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027d62 FUN_144027d62 body=48 status=ok
// SIG undefined FUN_144027d62(void)

longlong FUN_144027d62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027d92 FUN_144027d92 body=48 status=ok
// SIG undefined FUN_144027d92(void)

longlong FUN_144027d92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027dc2 FUN_144027dc2 body=48 status=ok
// SIG undefined FUN_144027dc2(void)

longlong FUN_144027dc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027df2 FUN_144027df2 body=48 status=ok
// SIG undefined FUN_144027df2(void)

longlong FUN_144027df2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027e22 FUN_144027e22 body=48 status=ok
// SIG undefined FUN_144027e22(void)

longlong FUN_144027e22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027e52 FUN_144027e52 body=48 status=ok
// SIG undefined FUN_144027e52(void)

longlong FUN_144027e52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027e82 FUN_144027e82 body=48 status=ok
// SIG undefined FUN_144027e82(void)

longlong FUN_144027e82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027eb2 FUN_144027eb2 body=48 status=ok
// SIG undefined FUN_144027eb2(void)

longlong FUN_144027eb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027ee2 FUN_144027ee2 body=48 status=ok
// SIG undefined FUN_144027ee2(void)

longlong FUN_144027ee2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027f12 FUN_144027f12 body=48 status=ok
// SIG undefined FUN_144027f12(void)

longlong FUN_144027f12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027f42 FUN_144027f42 body=48 status=ok
// SIG undefined FUN_144027f42(void)

longlong FUN_144027f42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027f72 FUN_144027f72 body=48 status=ok
// SIG undefined FUN_144027f72(void)

longlong FUN_144027f72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027fa2 FUN_144027fa2 body=48 status=ok
// SIG undefined FUN_144027fa2(void)

longlong FUN_144027fa2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144027fd2 FUN_144027fd2 body=48 status=ok
// SIG undefined FUN_144027fd2(void)

longlong FUN_144027fd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144028002 FUN_144028002 body=48 status=ok
// SIG undefined FUN_144028002(void)

longlong FUN_144028002(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144028032 FUN_144028032 body=48 status=ok
// SIG undefined FUN_144028032(void)

longlong FUN_144028032(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144028062 FUN_144028062 body=48 status=ok
// SIG undefined FUN_144028062(void)

longlong FUN_144028062(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144028092 FUN_144028092 body=48 status=ok
// SIG undefined FUN_144028092(void)

longlong FUN_144028092(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440280ca FUN_1440280ca body=48 status=ok
// SIG undefined FUN_1440280ca(void)

longlong FUN_1440280ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402810a FUN_14402810a body=48 status=ok
// SIG undefined FUN_14402810a(void)

longlong FUN_14402810a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402813a FUN_14402813a body=48 status=ok
// SIG undefined FUN_14402813a(void)

longlong FUN_14402813a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402816a FUN_14402816a body=48 status=ok
// SIG undefined FUN_14402816a(void)

longlong FUN_14402816a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402819a FUN_14402819a body=48 status=ok
// SIG undefined FUN_14402819a(void)

longlong FUN_14402819a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440281ca FUN_1440281ca body=48 status=ok
// SIG undefined FUN_1440281ca(void)

longlong FUN_1440281ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440281fa FUN_1440281fa body=48 status=ok
// SIG undefined FUN_1440281fa(void)

longlong FUN_1440281fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402822a FUN_14402822a body=48 status=ok
// SIG undefined FUN_14402822a(void)

longlong FUN_14402822a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402825a FUN_14402825a body=48 status=ok
// SIG undefined FUN_14402825a(void)

longlong FUN_14402825a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402828a FUN_14402828a body=48 status=ok
// SIG undefined FUN_14402828a(void)

longlong FUN_14402828a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144028398 FUN_144028398 body=57 status=ok
// SIG undefined FUN_144028398(void)

void FUN_144028398(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba49b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba49b8 = FUN_140002ddd(FUN_1465bf5ee,uVar1,L"InteractiveDamageableDef");
  }
  return;
}



// FUNCTION 144028500 FUN_144028500 body=57 status=ok
// SIG undefined FUN_144028500(void)

void FUN_144028500(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4b90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4b90 = FUN_140002ddd(FUN_1465bfd96,uVar1,L"InventoryAugmentAspect");
  }
  return;
}



// FUNCTION 1440285a8 FUN_1440285a8 body=57 status=ok
// SIG undefined FUN_1440285a8(void)

void FUN_1440285a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4bf0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4bf0 = FUN_140002ddd(FUN_1465bffb9,uVar1,L"InventoryAugmentAttributeValueResolver");
  }
  return;
}



// FUNCTION 14402864a FUN_14402864a body=81 status=ok
// SIG undefined FUN_14402864a(void)

void FUN_14402864a(undefined8 param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x68) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x50));
  }
  if ((*(longlong *)(param_2 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x50));
    return;
  }
  return;
}



// FUNCTION 1440286c2 FUN_1440286c2 body=57 status=ok
// SIG undefined FUN_1440286c2(void)

void FUN_1440286c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4cb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4cb0 = FUN_140002ddd(FUN_1465bfdc5,uVar1,L"InventoryAugmentDef");
  }
  return;
}



// FUNCTION 144028715 FUN_144028715 body=831 status=ok
// SIG undefined FUN_144028715(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144028715(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba48d8 = (ulonglong)uVar2;
  ppuStack_60 = &PTR_FUN_14b67b710;
  local_58 = 1;
  local_68 = 6;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67b730);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba4988);
  if (cVar1 == '\0') {
    _DAT_14cba4988 = 0;
    uRam000000014cba4990 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b67b980,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67bbf0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b67c090,1,&PTR_FUN_14b67c010);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b67c350;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67c370);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b67c770,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67cbe0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b67d110,1,&PTR_FUN_14b67d070);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67d200);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67d290);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67d4e0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b67d730;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67d750);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67d920);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67d9d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67dc80);
  FUN_14098d3d2(FUN_144027b3d,L"/Script/OakGame",L"OakDelegateBasedConditionIdentifiers",
                &DAT_14cba4c30);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b67f540;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67f580);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b67f7c0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144028a58 FUN_144028a58 body=55 status=ok
// SIG undefined FUN_144028a58(void)

void FUN_144028a58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4ce8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4ce8 = FUN_14171c317(FUN_1465c072f,uVar1,L"EAttributeModifierVariation");
  }
  return;
}



// FUNCTION 144028a8f FUN_144028a8f body=55 status=ok
// SIG undefined FUN_144028a8f(void)

void FUN_144028a8f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4d00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4d00 = FUN_14171c317(FUN_1465c075e,uVar1,L"EAttributeModifierContext");
  }
  return;
}



// FUNCTION 144028ac6 FUN_144028ac6 body=55 status=ok
// SIG undefined FUN_144028ac6(void)

void FUN_144028ac6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4d60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4d60 = FUN_14171c317(FUN_1465c0950,uVar1,L"EDamageType");
  }
  return;
}



// FUNCTION 144028afd FUN_144028afd body=55 status=ok
// SIG undefined FUN_144028afd(void)

void FUN_144028afd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4d78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4d78 = FUN_14171c317(FUN_1465c097f,uVar1,L"EHitVariation");
  }
  return;
}



// FUNCTION 144028b34 FUN_144028b34 body=55 status=ok
// SIG undefined FUN_144028b34(void)

void FUN_144028b34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4e20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4e20 = FUN_14171c317(FUN_1465c0cc6,uVar1,L"EInventoryAugmentEffectType");
  }
  return;
}



// FUNCTION 144028d29 FUN_144028d29 body=47 status=ok
// SIG undefined FUN_144028d29(void)

longlong FUN_144028d29(void)

{
  if (DAT_14cba50b8 == 0) {
    FUN_14073dd9a(&DAT_14cba50b8,&PTR_LAB_14b68b5e0);
  }
  return DAT_14cba50b8;
}



// FUNCTION 144028d58 FUN_144028d58 body=47 status=ok
// SIG undefined FUN_144028d58(void)

longlong FUN_144028d58(void)

{
  if (DAT_14cba50a8 == 0) {
    FUN_14000fc22(&DAT_14cba50a8,&PTR_FUN_14b68b528);
  }
  return DAT_14cba50a8;
}



// FUNCTION 144028d88 FUN_144028d88 body=1401 status=ok
// SIG undefined FUN_144028d88(void)

void FUN_144028d88(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  int *_Src_00;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_38);
            goto LAB_144028f59;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &uStack_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_38,lVar5);
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
LAB_144028f59:
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
            goto LAB_14402910c;
          }
        }
        _Src_00 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_3c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_3c,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_3c,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (int)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
LAB_14402910c:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 8))(param_1,&uStack_38,local_3c != 0);
  if (CONCAT44(uStack_34,uStack_38) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144029302 FUN_144029302 body=34 status=ok
// SIG undefined FUN_144029302(void)

void FUN_144029302(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144029324();
  FUN_14069c8d6(uVar1,&PTR_s_OnCultureChanged_14b68b570,1);
  return;
}



// FUNCTION 144029324 FUN_144029324 body=227 status=ok
// SIG undefined FUN_144029324(void)

longlong FUN_144029324(void)

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
  if (DAT_14cba50b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_144029408;
    local_40 = FUN_14402940b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUISettingsListener",&DAT_14cba50b0,FUN_144029302);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba50b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14402940b FUN_14402940b body=91 status=ok
// SIG undefined FUN_14402940b(void)

void FUN_14402940b(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14b68b620;
  return;
}



// FUNCTION 144029466 FUN_144029466 body=48 status=ok
// SIG undefined FUN_144029466(void)

longlong FUN_144029466(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144029496 FUN_144029496 body=48 status=ok
// SIG undefined FUN_144029496(void)

longlong FUN_144029496(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440294c6 FUN_1440294c6 body=48 status=ok
// SIG undefined FUN_1440294c6(void)

longlong FUN_1440294c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440294f6 FUN_1440294f6 body=48 status=ok
// SIG undefined FUN_1440294f6(void)

longlong FUN_1440294f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144029536 FUN_144029536 body=38 status=ok
// SIG undefined FUN_144029536(void)

undefined8 FUN_144029536(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402955c FUN_14402955c body=48 status=ok
// SIG undefined FUN_14402955c(void)

longlong FUN_14402955c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402958c FUN_14402958c body=48 status=ok
// SIG undefined FUN_14402958c(void)

longlong FUN_14402958c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440295bc FUN_1440295bc body=48 status=ok
// SIG undefined FUN_1440295bc(void)

longlong FUN_1440295bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440295ec FUN_1440295ec body=48 status=ok
// SIG undefined FUN_1440295ec(void)

longlong FUN_1440295ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402961c FUN_14402961c body=48 status=ok
// SIG undefined FUN_14402961c(void)

longlong FUN_14402961c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402964c FUN_14402964c body=48 status=ok
// SIG undefined FUN_14402964c(void)

longlong FUN_14402964c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402967c FUN_14402967c body=48 status=ok
// SIG undefined FUN_14402967c(void)

longlong FUN_14402967c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440296ac FUN_1440296ac body=48 status=ok
// SIG undefined FUN_1440296ac(void)

longlong FUN_1440296ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440296dc FUN_1440296dc body=48 status=ok
// SIG undefined FUN_1440296dc(void)

longlong FUN_1440296dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402970c FUN_14402970c body=48 status=ok
// SIG undefined FUN_14402970c(void)

longlong FUN_14402970c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402973c FUN_14402973c body=48 status=ok
// SIG undefined FUN_14402973c(void)

longlong FUN_14402973c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


