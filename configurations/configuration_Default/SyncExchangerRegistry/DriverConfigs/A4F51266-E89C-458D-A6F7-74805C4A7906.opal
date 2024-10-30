OPAL-1.0 Object
OpalBoards_GUI::OpalBoardsExchangerConfiguration {
  bitstreamFileName=TE0741_4-EX-0001-3_5_0_817-eHSx128_Gen4_Machines_IOConfig2-3C-17.bin
  boardType=TE0741
  boardTypeEntry=TE0741_entry1
  boardTypeIdentifier=TE0741_entry3
  isCentral=1
  m00_opalRelativePath=firmware/TE0741_4-EX-0001-eHSx128_Gen4_Machines_IOConfig2.opal
  m01_1_IpAddress=
  m01_2_chassisName=
  m01_boardID=0
  m02_0_macAddress=
  m02_clockMode=HW
  m03_useExternalSynchro=0
  m04_0_masterWithExternalClk=0
  m04_1_synchroInitTimeout=ts * 10
  m06_0_bitstreamPathType=Standard_repositories
  m06_bitstreamConfigFile=C:/Users/ORTG/Documents/Files/RT_LAB_GIT_test_7/firmware/TE0741_4-EX-0001-eHSx128_Gen4_Machines_IOConfig2.opal
  m07_showAdvancedCfg=0
  m08_timeStepFactor=1
  m09_0_collectRegisterAccess=0
  m09_1_registerAccessToolCore=0
  m09_2_registerAccessFile=All
  m09_verboseLevel=Always
  m10_enableUpdateReqByFW=0
  m15_hasIoSfpBitstream=0
  m16_BitstreamNotFound=Bitstream not found
  m16_autoFlashUpdate=1
  m16_bitstreamFileName=TE0741_4-EX-0001-3_5_0_817-eHSx128_Gen4_Machines_IOConfig2-3C-17.bin
  m16_forceFlashUpdate=0
  m17_enableIOPolymorphism=0
  m18_enableFPGAScope=0
  m19_fpgaScopeUseRTCore=0
  m20_fpgaScopeXHP=0
  m999_isVirtualModeEnabled=0
  watchdogUpdateRequestCount=2000
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA
  m00_newBoardType {
    mAttemptedVal=-1
    mKey=Select a valid chassis type
    mValue=0
  }
  m04_externalSynchroType {
    mAttemptedVal=-1
    mKey=Optical
    mValue=0
  }
  m05_0_generatedExternalClk {
    mAttemptedVal=-1
    mKey=Optical
    mValue=0
  }
  m06_stdRepoConfigFiles {
    mAttemptedVal=-1
    mKey=TE0741_4-EX-0001-eHSx128_Gen4_Machines_IOConfig2.opal
    mValue=5
  }
  m11_slots=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
  m12_0_dataToBoard=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_dataToBoard
  m12_1_dataFromBoard=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_dataFromBoard
  m12_2_loadToBoard=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_loadToBoard
  m12_3_loadFromBoard=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_loadFromBoard
  m13_0_mmcConfig=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/mmc_cfg
  m13_eHSConfig {
    m00_isEnabled=0
    name=
    nrOfGates=0
    presentInBitstream=0
    dataFromBoard {
    }
    dataToBoard {
    }
    loadFromBoard {
    }
    loadToBoard {
    }
    matFile {
      expectedDWORDCount=0
      name=ehs_mat.mat
      port=64
      type=U32
    }
  }
  m14_remoteBoardsCfg=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/remotes_cfg
  parent=/
}
IOConfigListMap<OpalBoards_GUI::Slot> {
  resizable=0
  uiName=
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
  items {
    item {
      IOConfigItem_id=Slot 1A - Digital bi-directional
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
      instance {
        analogOutRange=16
        description=OPAL-RT OP5369 Digital 32ch. Programmable threshold (resolution is 0.1176V) and direction per group of 8 ports
        functionality=32-channel digital input/output interface. Compatibility: OP5369;  OP5353;  OP5360-1;  OP5360-2;  OP5360-3.
        ioCardType=OP5369
        isRateConfigurable=0
        isSingleFloat=0
        isSynchronizedAnalog=0
        m01_rate=_1_Msps
        m03_pwmSyncType=Beginning
        reflectRateConfigurable=0
        slaveSlotName=
        thresholdResolution=0.117600001
        analogInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8022C32C-F8BF-448C-865A-B7E7698859D8
        analogOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/9C1DECC1-5B91-4F68-974E-7706A6C51156
        digitalInOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
        digitalInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/EB7D433D-21E3-4676-AE73-2CBA3ADB7096
        digitalOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/64976571-D527-410D-9367-D1149B1ADC84
        m00_analogOutRange {
          mAttemptedVal=-1
          mKey=-16 V / +16 V
          mValue=0
        }
        m01_pwmSubgroup {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        m02_pwmChannel {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        mixedAnalogSubgroups=
      }
    }
    item {
      IOConfigItem_id=Slot 1B - Analog out
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
      instance {
        analogOutRange=16
        description=OPAL-RT OP5330-3 Digital to Analog Mezzanine, Analog output channels : 16, Maximum current : 15mA
        functionality=16-channel analog output interface. Compatibility: OP5330-1;  OP5330-3.
        ioCardType=OP5330-3
        isRateConfigurable=1
        isSingleFloat=0
        isSynchronizedAnalog=0
        m01_rate=_1_Msps
        m03_pwmSyncType=Beginning
        reflectRateConfigurable=0
        slaveSlotName=
        thresholdResolution=0.117600001
        analogInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/93F12CE5-7F01-4099-8F0D-3E8424ACACF5
        analogOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41
        digitalInOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/ADB94B4F-3384-47F9-974B-7BBB6EDA5F62
        digitalInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/4EFC34D4-EFDC-4962-8483-7560038E2540
        digitalOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/FBA58384-9FDF-47DD-BFC1-4F51685000A2
        m00_analogOutRange {
          mAttemptedVal=-1
          mKey=-16 V / +16 V
          mValue=0
        }
        m01_pwmSubgroup {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        m02_pwmChannel {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        mixedAnalogSubgroups=
      }
    }
    item {
      IOConfigItem_id=Slot 2A - Analog in
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
      instance {
        analogOutRange=16
        description=OPAL-RT OP5342 Analog to Digital Mezzanine, Analog input channels : 16, Conversion time : 0.5us
        functionality=16-channel analog input interface. Compatibility: OP5342.
        ioCardType=OP5342
        isRateConfigurable=0
        isSingleFloat=0
        isSynchronizedAnalog=0
        m01_rate=_1_Msps
        m03_pwmSyncType=Beginning
        reflectRateConfigurable=0
        slaveSlotName=
        thresholdResolution=0.117600001
        analogInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850
        analogOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/4ED5A21C-6D96-4F07-AE85-B083508BC752
        digitalInOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/69E6EB02-0935-4B67-BB12-324DE11F305D
        digitalInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/6FA07D1B-530D-4A2B-9377-8EFFF8BE5E9F
        digitalOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/1F4EF8D5-7617-4E66-AECB-A5013A543856
        m00_analogOutRange {
          mAttemptedVal=-1
          mKey=-16 V / +16 V
          mValue=0
        }
        m01_pwmSubgroup {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        m02_pwmChannel {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        mixedAnalogSubgroups=
      }
    }
    item {
      IOConfigItem_id=Slot 2B - Analog out
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
      instance {
        analogOutRange=16
        description=OPAL-RT OP5330-3 Digital to Analog Mezzanine, Analog output channels : 16, Maximum current : 15mA
        functionality=16-channel analog output interface. Compatibility: OP5330-1;  OP5330-3.
        ioCardType=OP5330-3
        isRateConfigurable=1
        isSingleFloat=0
        isSynchronizedAnalog=0
        m01_rate=_1_Msps
        m03_pwmSyncType=Beginning
        reflectRateConfigurable=0
        slaveSlotName=
        thresholdResolution=0.117600001
        analogInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/F302996D-3F61-41DA-B4E5-F35E9A2B81B9
        analogOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2
        digitalInOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51DCA0BF-611F-4B91-AC45-720147E92192
        digitalInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/4B26C3DA-660F-4720-B973-A3B92E61A4E2
        digitalOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/944D69CF-EAB2-4540-B856-3EB445C373F0
        m00_analogOutRange {
          mAttemptedVal=-1
          mKey=-16 V / +16 V
          mValue=0
        }
        m01_pwmSubgroup {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        m02_pwmChannel {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        mixedAnalogSubgroups=
      }
    }
    item {
      IOConfigItem_id=Slot 3A - Digital in
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
      instance {
        analogOutRange=16
        description=OPAL-RT OP5969-1 RS422 - 6in and 6out
        functionality=6-channel digital input/output interface. Compatibility: OP5969-2;  OP5969-1.
        ioCardType=OP5969-1
        isRateConfigurable=0
        isSingleFloat=0
        isSynchronizedAnalog=0
        m01_rate=_1_Msps
        m03_pwmSyncType=Beginning
        reflectRateConfigurable=0
        slaveSlotName=
        thresholdResolution=0.117600001
        analogInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/6A9945D6-1CE7-4181-A544-45FB457BD77B
        analogOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/C0D425C5-D446-44BF-A384-902705597B67
        digitalInOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/75BEFCBB-051B-4F09-9377-0B91CD501ED7
        digitalInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/76E6628D-0F38-4A54-810E-E802E16CCFD1
        digitalOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/BA253785-A953-40A1-8498-28998077CF72
        m00_analogOutRange {
          mAttemptedVal=-1
          mKey=-16 V / +16 V
          mValue=0
        }
        m01_pwmSubgroup {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        m02_pwmChannel {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        mixedAnalogSubgroups=
      }
    }
    item {
      IOConfigItem_id=Slot 3B - Digital out
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
      instance {
        analogOutRange=16
        description=OPAL-RT OP5969-1 RS422 - 6in and 6out
        functionality=6-channel digital input/output interface. Compatibility: OP5969-2;  OP5969-1.
        ioCardType=OP5969-1
        isRateConfigurable=0
        isSingleFloat=0
        isSynchronizedAnalog=0
        m01_rate=_1_Msps
        m03_pwmSyncType=Beginning
        reflectRateConfigurable=0
        slaveSlotName=
        thresholdResolution=0.117600001
        analogInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/52417696-0CE3-44E5-BBB3-87D0D42C0798
        analogOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/BAC3AB06-7D5D-4433-9723-05171C1128F8
        digitalInOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/9524AA25-E276-4524-8343-D971987FBFEB
        digitalInSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/F7D565DC-697D-4BE7-A27B-B4A39B048EBF
        digitalOutSubgroups=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/712DDCF5-77C9-41B6-9719-A691558A1D47
        m00_analogOutRange {
          mAttemptedVal=-1
          mKey=-16 V / +16 V
          mValue=0
        }
        m01_pwmSubgroup {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        m02_pwmChannel {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
        mixedAnalogSubgroups=
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA
}
IOConfigListMap<OpalBoards_GUI::RawDataPortConfig> {
  resizable=0
  uiName=
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_dataToBoard
  items {
    item {
      IOConfigItem_id=Port 31 (Maximum 2 DWORDS)
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_dataToBoard
      instance {
        m00_sendMatFile=0
        m01_matFileName=
        m02_sendLoadINRealTime=0
        m03_sendLoadINAtInit=0
        maxBytesAllowed=8
        maxDwordsAllowed=2
        portUsed=31
        dataList=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_dataToBoard/74AD4F67-255D-45D7-B32F-071F75FE1A28
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA
}
IOConfigListMap<OpalBoards_GUI::RawDataPortConfig> {
  resizable=0
  uiName=
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_dataFromBoard
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA
}
IOConfigListMap<OpalBoards_GUI::RawDataPortConfig> {
  resizable=0
  uiName=
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_loadToBoard
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA
}
IOConfigListMap<OpalBoards_GUI::RawDataPortConfig> {
  resizable=0
  uiName=
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_loadFromBoard
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA
}
IOConfigListMap<OpalBoards_GUI::MMCConfiguration> {
  resizable=0
  uiName=MMCInfo_
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/mmc_cfg
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA
}
IOConfigListMap<OpalBoards_GUI::RemoteBoardConfiguration> {
  resizable=1
  uiName=Remote_
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/remotes_cfg
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA
}
IOConfigListMap<OpalBoards_GUI::AnalogInSubgroup> {
  resizable=0
  uiName=analogInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8022C32C-F8BF-448C-865A-B7E7698859D8
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogOutSubgroup> {
  resizable=0
  uiName=analogOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/9C1DECC1-5B91-4F68-974E-7706A6C51156
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInOutSubgroup> {
  resizable=0
  uiName=digitalInOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
  items {
    item {
      IOConfigItem_id=Channels 0 - 7 (output)
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
      instance {
        isDirConfigurable=1
        isOutput=1
        isThresholdConfigurable=1
        isVoltageConfigurable=0
        m01_direction=Output
        m01_thresholdResolution=0.117600001
        m01_voltage=_3V
        m02_0_thresholdLow=1.52900004
        m02_1_thresholdHigh=3.52800012
        hasStatus=0
        isDPDTRequired=0
        m01_typeStatic=Static
        m03_outputComplementary=0
        m03_timeUnit=Second
        m04_0_enabledRTDeadTime=0
        m04_enableRTPhaseShift=0
        m04_numberOfEncoder=2
        m05_allowDisablingChannel=0
        m05_frequency=Hz
        m07_resolution=16383
        m08_rotation=Ch_A_leads_Ch_B
        m09_auxilliaryOutputType=Raw
        m09_polarity=Active_high
        m09_rcpPwmPeriodDelay=0
        m10_angleUnit=Degree
        m12_minimalRate=0.00166666671
        typeIsSelectable=1
        configPort=3
        dataPort=10
        m00_useInPropertyTree=1
        type=Digital_pulse_width_modulated
        channelsIn=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/A3281CBD-34DB-4C16-83E0-A86529EABF9A
        channelsOut=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/8F1FB205-4601-4C1C-94A9-D250223F6CD7
        digitalOptions {
          defaultDirection=BOTH
          defaultThresholdHigh=3.5
          defaultThresholdLow=1.5
          defaultVoltage=0
          inputDirParameters {
            configPort=64
            dataPort=2
            defaultThresholdHigh=0
            defaultThresholdLow=0
            hasStatus=0
            isSelectable=1
            staticType=Digital_static
          }
          outputDirParameters {
            configPort=3
            dataPort=10
            defaultThresholdHigh=0
            defaultThresholdLow=0
            hasStatus=0
            isSelectable=1
            staticType=Digital_static
          }
        }
        m02_typeSelectable {
          mAttemptedVal=-1
          mKey=Pulse width modulated
          mValue=1
        }
      }
    }
    item {
      IOConfigItem_id=Channels 8 - 15 (output)
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
      instance {
        isDirConfigurable=1
        isOutput=1
        isThresholdConfigurable=1
        isVoltageConfigurable=0
        m01_direction=Output
        m01_thresholdResolution=0.117600001
        m01_voltage=_3V
        m02_0_thresholdLow=1.52900004
        m02_1_thresholdHigh=3.52800012
        hasStatus=0
        isDPDTRequired=0
        m01_typeStatic=Static
        m03_outputComplementary=0
        m03_timeUnit=Second
        m04_0_enabledRTDeadTime=0
        m04_enableRTPhaseShift=0
        m04_numberOfEncoder=2
        m05_allowDisablingChannel=0
        m05_frequency=Hz
        m07_resolution=16383
        m08_rotation=Ch_A_leads_Ch_B
        m09_auxilliaryOutputType=Raw
        m09_polarity=Active_high
        m09_rcpPwmPeriodDelay=0
        m10_angleUnit=Degree
        m12_minimalRate=0.00166666671
        typeIsSelectable=1
        configPort=4
        dataPort=11
        m00_useInPropertyTree=0
        type=Digital_static
        channelsIn=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/CB74EAC7-F7C0-4155-B7C4-602C58EC021A
        channelsOut=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/38ED5517-AF03-46BF-9907-AD1A47E1706D
        digitalOptions {
          defaultDirection=BOTH
          defaultThresholdHigh=3.5
          defaultThresholdLow=1.5
          defaultVoltage=0
          inputDirParameters {
            configPort=64
            dataPort=3
            defaultThresholdHigh=0
            defaultThresholdLow=0
            hasStatus=0
            isSelectable=1
            staticType=Digital_static
          }
          outputDirParameters {
            configPort=4
            dataPort=11
            defaultThresholdHigh=0
            defaultThresholdLow=0
            hasStatus=0
            isSelectable=1
            staticType=Digital_static
          }
        }
        m02_typeSelectable {
          mAttemptedVal=-1
          mKey=Static
          mValue=0
        }
      }
    }
    item {
      IOConfigItem_id=Channels 16 - 23 (output)
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
      instance {
        isDirConfigurable=1
        isOutput=1
        isThresholdConfigurable=1
        isVoltageConfigurable=0
        m01_direction=Output
        m01_thresholdResolution=0.117600001
        m01_voltage=_3V
        m02_0_thresholdLow=1.52900004
        m02_1_thresholdHigh=3.52800012
        hasStatus=0
        isDPDTRequired=0
        m01_typeStatic=Static
        m03_outputComplementary=0
        m03_timeUnit=Second
        m04_0_enabledRTDeadTime=0
        m04_enableRTPhaseShift=0
        m04_numberOfEncoder=2
        m05_allowDisablingChannel=0
        m05_frequency=Hz
        m07_resolution=16383
        m08_rotation=Ch_A_leads_Ch_B
        m09_auxilliaryOutputType=Raw
        m09_polarity=Active_high
        m09_rcpPwmPeriodDelay=0
        m10_angleUnit=Degree
        m12_minimalRate=0.00166666671
        typeIsSelectable=1
        configPort=5
        dataPort=12
        m00_useInPropertyTree=0
        type=Digital_pulse_width_modulated
        channelsIn=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/5DA3091B-19C5-48BA-955E-3842CF20DD8E
        channelsOut=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/B0E0D038-0BE7-4E39-93CF-3A9A5571AEF7
        digitalOptions {
          defaultDirection=BOTH
          defaultThresholdHigh=3.5
          defaultThresholdLow=1.5
          defaultVoltage=0
          inputDirParameters {
            configPort=64
            dataPort=4
            defaultThresholdHigh=0
            defaultThresholdLow=0
            hasStatus=0
            isSelectable=1
            staticType=Digital_static
          }
          outputDirParameters {
            configPort=5
            dataPort=12
            defaultThresholdHigh=0
            defaultThresholdLow=0
            hasStatus=0
            isSelectable=1
            staticType=Digital_static
          }
        }
        m02_typeSelectable {
          mAttemptedVal=-1
          mKey=Pulse width modulated
          mValue=1
        }
      }
    }
    item {
      IOConfigItem_id=Channels 24 - 31 (output)
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
      instance {
        isDirConfigurable=1
        isOutput=1
        isThresholdConfigurable=1
        isVoltageConfigurable=0
        m01_direction=Output
        m01_thresholdResolution=0.117600001
        m01_voltage=_3V
        m02_0_thresholdLow=1.52900004
        m02_1_thresholdHigh=3.52800012
        hasStatus=0
        isDPDTRequired=0
        m01_typeStatic=Static
        m03_outputComplementary=0
        m03_timeUnit=Second
        m04_0_enabledRTDeadTime=0
        m04_enableRTPhaseShift=0
        m04_numberOfEncoder=2
        m05_allowDisablingChannel=0
        m05_frequency=Hz
        m07_resolution=16383
        m08_rotation=Ch_A_leads_Ch_B
        m09_auxilliaryOutputType=Raw
        m09_polarity=Active_high
        m09_rcpPwmPeriodDelay=0
        m10_angleUnit=Degree
        m12_minimalRate=0.00166666671
        typeIsSelectable=1
        configPort=6
        dataPort=13
        m00_useInPropertyTree=0
        type=Digital_static
        channelsIn=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/EFF01D62-A80D-4823-BF03-516262D3875A
        channelsOut=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/535A0A13-9DF5-44CA-96E2-F224B9F21DB9
        digitalOptions {
          defaultDirection=BOTH
          defaultThresholdHigh=3.5
          defaultThresholdLow=1.5
          defaultVoltage=0
          inputDirParameters {
            configPort=64
            dataPort=5
            defaultThresholdHigh=0
            defaultThresholdLow=0
            hasStatus=0
            isSelectable=1
            staticType=Digital_static
          }
          outputDirParameters {
            configPort=6
            dataPort=13
            defaultThresholdHigh=0
            defaultThresholdLow=0
            hasStatus=0
            isSelectable=1
            staticType=Digital_static
          }
        }
        m02_typeSelectable {
          mAttemptedVal=-1
          mKey=Static
          mValue=0
        }
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInSubgroup> {
  resizable=0
  uiName=digitalInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/EB7D433D-21E3-4676-AE73-2CBA3ADB7096
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalOutSubgroup> {
  resizable=0
  uiName=digitalOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/64976571-D527-410D-9367-D1149B1ADC84
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogInSubgroup> {
  resizable=0
  uiName=analogInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/93F12CE5-7F01-4099-8F0D-3E8424ACACF5
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogOutSubgroup> {
  resizable=0
  uiName=analogOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41
  items {
    item {
      IOConfigItem_id=Channels 0 - 7
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41
      instance {
        blockID=441487288
        isAAO=0
        userBlockID=125940990
        hasResolverIn=128
        hasResolverOut=0
        isOP48H20=0
        m01_type=
        m02_0_separator1=	
        m02_calibrationMode=0
        m02_carrierSelectMode1=Internal
        m03_Ksi=0.5
        m03_carrierSelectMode2=Internal
        m04_w0=1000
        m05_useInternalCarrier=0
        m06_internalCarrierDelay=0
        m07_internalCarrierFreq=50000
        m08_internalCarrierAmp=1
        m09_internalCarrierOffset=0
        m10_externalCarrierAmp=1
        m11_externalCarrierOffset=0
        m12_sinAmp=1
        m13_sinOffset=0
        m14_cosAmp=1
        m15_cosOffset=0
        m16_separator2=	
        m17_calibrationMode2=0
        m18_Ksi2=0.5
        m19_w02=1000
        m20_useInternalCarrier2=0
        m21_internalCarrierDelay2=0
        m22_internalCarrierFreq2=50000
        m23_internalCarrierAmp2=1
        m24_internalCarrierOffset2=0
        m25_externalCarrierAmp2=1
        m26_externalCarrierOffset2=0
        m27_sinAmp2=1
        m28_sinOffset2=0
        m29_cosAmp2=1
        m30_cosOffset2=0
        pwmChannelNb=64
        pwmSlotName=
        configPort=64
        dataPort=18
        m00_useInPropertyTree=0
        type=Analog
        channels=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41/39B62B2F-CCB1-4257-9B9B-26D616DBC97A
        cpuSignalSourceIDs {
        }
        currentAAOSignalSourceChoices {
        }
        internalAAOSigSrcChoices {
        }
      }
    }
    item {
      IOConfigItem_id=Channels 8 - 15
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41
      instance {
        blockID=959268146
        isAAO=0
        userBlockID=759248434
        hasResolverIn=0
        hasResolverOut=0
        isOP48H20=0
        m01_type=
        m02_0_separator1=	
        m02_calibrationMode=0
        m02_carrierSelectMode1=Internal
        m03_Ksi=0.5
        m03_carrierSelectMode2=Internal
        m04_w0=1000
        m05_useInternalCarrier=0
        m06_internalCarrierDelay=0
        m07_internalCarrierFreq=50000
        m08_internalCarrierAmp=1
        m09_internalCarrierOffset=0
        m10_externalCarrierAmp=1
        m11_externalCarrierOffset=0
        m12_sinAmp=1
        m13_sinOffset=0
        m14_cosAmp=1
        m15_cosOffset=0
        m16_separator2=	
        m17_calibrationMode2=0
        m18_Ksi2=0.5
        m19_w02=1000
        m20_useInternalCarrier2=0
        m21_internalCarrierDelay2=0
        m22_internalCarrierFreq2=50000
        m23_internalCarrierAmp2=1
        m24_internalCarrierOffset2=0
        m25_externalCarrierAmp2=1
        m26_externalCarrierOffset2=0
        m27_sinAmp2=1
        m28_sinOffset2=0
        m29_cosAmp2=1
        m30_cosOffset2=0
        pwmChannelNb=0
        pwmSlotName=
        configPort=64
        dataPort=19
        m00_useInPropertyTree=0
        type=Analog
        channels=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41/A082C2D6-6CEF-4C2B-81BB-F15C03D03C5F
        cpuSignalSourceIDs {
        }
        currentAAOSignalSourceChoices {
        }
        internalAAOSigSrcChoices {
        }
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInOutSubgroup> {
  resizable=0
  uiName=digitalInOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/ADB94B4F-3384-47F9-974B-7BBB6EDA5F62
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInSubgroup> {
  resizable=0
  uiName=digitalInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/4EFC34D4-EFDC-4962-8483-7560038E2540
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalOutSubgroup> {
  resizable=0
  uiName=digitalOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/FBA58384-9FDF-47DD-BFC1-4F51685000A2
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogInSubgroup> {
  resizable=0
  uiName=analogInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850
  items {
    item {
      IOConfigItem_id=Channels 0 - 7
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850
      instance {
        hasResolverIn=0
        hasResolverOut=0
        isOP48H20=0
        m01_type=
        m02_0_separator1=
        m02_calibrationMode=0
        m02_carrierSelectMode1=Internal
        m03_Ksi=0.5
        m03_carrierSelectMode2=Internal
        m04_w0=1000
        m05_useInternalCarrier=0
        m06_internalCarrierDelay=0
        m07_internalCarrierFreq=50000
        m08_internalCarrierAmp=1
        m09_internalCarrierOffset=0
        m10_externalCarrierAmp=1
        m11_externalCarrierOffset=0
        m12_sinAmp=1
        m13_sinOffset=0
        m14_cosAmp=1
        m15_cosOffset=0
        m16_separator2=
        m17_calibrationMode2=0
        m18_Ksi2=0.5
        m19_w02=1000
        m20_useInternalCarrier2=0
        m21_internalCarrierDelay2=0
        m22_internalCarrierFreq2=50000
        m23_internalCarrierAmp2=1
        m24_internalCarrierOffset2=0
        m25_externalCarrierAmp2=1
        m26_externalCarrierOffset2=0
        m27_sinAmp2=1
        m28_sinOffset2=0
        m29_cosAmp2=1
        m30_cosOffset2=0
        pwmChannelNb=64
        pwmSlotName=
        configPort=64
        dataPort=6
        m00_useInPropertyTree=0
        type=Analog
        channels=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850/98E261CA-C9B5-4AF7-B800-5038FA802812
      }
    }
    item {
      IOConfigItem_id=Channels 8 - 15
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850
      instance {
        hasResolverIn=0
        hasResolverOut=107
        isOP48H20=0
        m01_type=
        m02_0_separator1=
        m02_calibrationMode=0
        m02_carrierSelectMode1=Internal
        m03_Ksi=0.5
        m03_carrierSelectMode2=Internal
        m04_w0=1000
        m05_useInternalCarrier=0
        m06_internalCarrierDelay=0
        m07_internalCarrierFreq=50000
        m08_internalCarrierAmp=1
        m09_internalCarrierOffset=0
        m10_externalCarrierAmp=1
        m11_externalCarrierOffset=0
        m12_sinAmp=1
        m13_sinOffset=0
        m14_cosAmp=1
        m15_cosOffset=0
        m16_separator2=
        m17_calibrationMode2=0
        m18_Ksi2=0.5
        m19_w02=1000
        m20_useInternalCarrier2=0
        m21_internalCarrierDelay2=0
        m22_internalCarrierFreq2=50000
        m23_internalCarrierAmp2=1
        m24_internalCarrierOffset2=0
        m25_externalCarrierAmp2=1
        m26_externalCarrierOffset2=0
        m27_sinAmp2=1
        m28_sinOffset2=0
        m29_cosAmp2=1
        m30_cosOffset2=0
        pwmChannelNb=64
        pwmSlotName=
        configPort=64
        dataPort=7
        m00_useInPropertyTree=0
        type=Analog
        channels=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850/A3113A15-72F9-4D57-B8ED-BB8FBA64E278
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogOutSubgroup> {
  resizable=0
  uiName=analogOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/4ED5A21C-6D96-4F07-AE85-B083508BC752
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInOutSubgroup> {
  resizable=0
  uiName=digitalInOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/69E6EB02-0935-4B67-BB12-324DE11F305D
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInSubgroup> {
  resizable=0
  uiName=digitalInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/6FA07D1B-530D-4A2B-9377-8EFFF8BE5E9F
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalOutSubgroup> {
  resizable=0
  uiName=digitalOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/1F4EF8D5-7617-4E66-AECB-A5013A543856
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogInSubgroup> {
  resizable=0
  uiName=analogInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/F302996D-3F61-41DA-B4E5-F35E9A2B81B9
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogOutSubgroup> {
  resizable=0
  uiName=analogOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2
  items {
    item {
      IOConfigItem_id=Channels 0 - 7
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2
      instance {
        blockID=441487288
        isAAO=0
        userBlockID=125940990
        hasResolverIn=0
        hasResolverOut=0
        isOP48H20=0
        m01_type=
        m02_0_separator1=	
        m02_calibrationMode=0
        m02_carrierSelectMode1=Internal
        m03_Ksi=0.5
        m03_carrierSelectMode2=Internal
        m04_w0=1000
        m05_useInternalCarrier=0
        m06_internalCarrierDelay=0
        m07_internalCarrierFreq=50000
        m08_internalCarrierAmp=1
        m09_internalCarrierOffset=0
        m10_externalCarrierAmp=1
        m11_externalCarrierOffset=0
        m12_sinAmp=1
        m13_sinOffset=0
        m14_cosAmp=1
        m15_cosOffset=0
        m16_separator2=	
        m17_calibrationMode2=0
        m18_Ksi2=0.5
        m19_w02=1000
        m20_useInternalCarrier2=0
        m21_internalCarrierDelay2=0
        m22_internalCarrierFreq2=50000
        m23_internalCarrierAmp2=1
        m24_internalCarrierOffset2=0
        m25_externalCarrierAmp2=1
        m26_externalCarrierOffset2=0
        m27_sinAmp2=1
        m28_sinOffset2=0
        m29_cosAmp2=1
        m30_cosOffset2=0
        pwmChannelNb=64
        pwmSlotName=
        configPort=64
        dataPort=20
        m00_useInPropertyTree=0
        type=Analog
        channels=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2/F705828A-AA91-44A1-8F9E-FAEB3B7E5456
        cpuSignalSourceIDs {
        }
        currentAAOSignalSourceChoices {
        }
        internalAAOSigSrcChoices {
        }
      }
    }
    item {
      IOConfigItem_id=Channels 8 - 15
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2
      instance {
        blockID=758329412
        isAAO=0
        userBlockID=1160917556
        hasResolverIn=0
        hasResolverOut=0
        isOP48H20=0
        m01_type=
        m02_0_separator1=	
        m02_calibrationMode=0
        m02_carrierSelectMode1=Internal
        m03_Ksi=0.5
        m03_carrierSelectMode2=Internal
        m04_w0=1000
        m05_useInternalCarrier=0
        m06_internalCarrierDelay=0
        m07_internalCarrierFreq=50000
        m08_internalCarrierAmp=1
        m09_internalCarrierOffset=0
        m10_externalCarrierAmp=1
        m11_externalCarrierOffset=0
        m12_sinAmp=1
        m13_sinOffset=0
        m14_cosAmp=1
        m15_cosOffset=0
        m16_separator2=	
        m17_calibrationMode2=0
        m18_Ksi2=0.5
        m19_w02=1000
        m20_useInternalCarrier2=0
        m21_internalCarrierDelay2=0
        m22_internalCarrierFreq2=50000
        m23_internalCarrierAmp2=1
        m24_internalCarrierOffset2=0
        m25_externalCarrierAmp2=1
        m26_externalCarrierOffset2=0
        m27_sinAmp2=1
        m28_sinOffset2=0
        m29_cosAmp2=1
        m30_cosOffset2=0
        pwmChannelNb=0
        pwmSlotName=
        configPort=64
        dataPort=21
        m00_useInPropertyTree=0
        type=Analog
        channels=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2/CE20B160-E3A3-4C33-A751-20D262C19DB1
        cpuSignalSourceIDs {
        }
        currentAAOSignalSourceChoices {
        }
        internalAAOSigSrcChoices {
        }
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInOutSubgroup> {
  resizable=0
  uiName=digitalInOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51DCA0BF-611F-4B91-AC45-720147E92192
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInSubgroup> {
  resizable=0
  uiName=digitalInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/4B26C3DA-660F-4720-B973-A3B92E61A4E2
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalOutSubgroup> {
  resizable=0
  uiName=digitalOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/944D69CF-EAB2-4540-B856-3EB445C373F0
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogInSubgroup> {
  resizable=0
  uiName=analogInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/6A9945D6-1CE7-4181-A544-45FB457BD77B
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogOutSubgroup> {
  resizable=0
  uiName=analogOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/C0D425C5-D446-44BF-A384-902705597B67
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInOutSubgroup> {
  resizable=0
  uiName=digitalInOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/75BEFCBB-051B-4F09-9377-0B91CD501ED7
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInSubgroup> {
  resizable=0
  uiName=digitalInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/76E6628D-0F38-4A54-810E-E802E16CCFD1
  items {
    item {
      IOConfigItem_id=Channels 0 - 7
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/76E6628D-0F38-4A54-810E-E802E16CCFD1
      instance {
        isThresholdConfigurable=0
        m01_thresholdResolution=-1
        m02_0_thresholdLow=4294720.5
        m02_1_thresholdHigh=4294720.5
        hasStatus=0
        isDPDTRequired=0
        m01_typeStatic=Encoder In
        m03_outputComplementary=0
        m03_timeUnit=Second
        m04_0_enabledRTDeadTime=0
        m04_enableRTPhaseShift=0
        m04_numberOfEncoder=2
        m05_allowDisablingChannel=0
        m05_frequency=Hz
        m07_resolution=16383
        m08_rotation=Ch_A_leads_Ch_B
        m09_auxilliaryOutputType=Raw
        m09_polarity=Active_high
        m09_rcpPwmPeriodDelay=0
        m10_angleUnit=Degree
        m12_minimalRate=0.00166666671
        typeIsSelectable=0
        configPort=18
        dataPort=9
        m00_useInPropertyTree=0
        type=Digital_quad_encoder_in
        channels=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/76E6628D-0F38-4A54-810E-E802E16CCFD1/B6408D51-F4A8-41F1-B706-C376EB2337F8
        m02_typeSelectable {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalOutSubgroup> {
  resizable=0
  uiName=digitalOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/BA253785-A953-40A1-8498-28998077CF72
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogInSubgroup> {
  resizable=0
  uiName=analogInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/52417696-0CE3-44E5-BBB3-87D0D42C0798
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::AnalogOutSubgroup> {
  resizable=0
  uiName=analogOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/BAC3AB06-7D5D-4433-9723-05171C1128F8
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInOutSubgroup> {
  resizable=0
  uiName=digitalInOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/9524AA25-E276-4524-8343-D971987FBFEB
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalInSubgroup> {
  resizable=0
  uiName=digitalInSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/F7D565DC-697D-4BE7-A27B-B4A39B048EBF
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigListMap<OpalBoards_GUI::DigitalOutSubgroup> {
  resizable=0
  uiName=digitalOutSubgroups
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/712DDCF5-77C9-41B6-9719-A691558A1D47
  items {
    item {
      IOConfigItem_id=Channels 0 - 7
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/EC301257-5DB5-4F26-8249-0E58909F714D/A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/712DDCF5-77C9-41B6-9719-A691558A1D47
      instance {
        hasStatus=0
        isDPDTRequired=1
        m01_typeStatic=Encoder Out
        m03_outputComplementary=0
        m03_timeUnit=Second
        m04_0_enabledRTDeadTime=0
        m04_enableRTPhaseShift=0
        m04_numberOfEncoder=2
        m05_allowDisablingChannel=0
        m05_frequency=Hz
        m07_resolution=16383
        m08_rotation=Ch_A_leads_Ch_B
        m09_auxilliaryOutputType=Raw
        m09_polarity=Active_high
        m09_rcpPwmPeriodDelay=0
        m10_angleUnit=Degree
        m12_minimalRate=0.00166666671
        typeIsSelectable=0
        configPort=22
        dataPort=30
        m00_useInPropertyTree=0
        type=Digital_quad_encoder_out
        channels=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/712DDCF5-77C9-41B6-9719-A691558A1D47/27E86567-53E3-490D-A3D8-62E4E8A810E9
        m02_typeSelectable {
          mAttemptedVal=-1
          mKey=
          mValue=-1
        }
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots
}
IOConfigList<FrameBuilder::DataProperties<FrameBuilder::Profiles::OpalBoards_GUI>> {
  resizable=1
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_dataToBoard/74AD4F67-255D-45D7-B32F-071F75FE1A28
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_dataToBoard
}
IOConfigList<OpalBoards_GUI::GenericSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/A3281CBD-34DB-4C16-83E0-A86529EABF9A
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
}
IOConfigList<OpalBoards_GUI::DigitalOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/8F1FB205-4601-4C1C-94A9-D250223F6CD7
  items {
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 0
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 1
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 2
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 3
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 4
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 5
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 6
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 7
      m01_tsd_numberOfEvents=1
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
}
IOConfigList<OpalBoards_GUI::GenericSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/CB74EAC7-F7C0-4155-B7C4-602C58EC021A
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
}
IOConfigList<OpalBoards_GUI::DigitalOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/38ED5517-AF03-46BF-9907-AD1A47E1706D
  items {
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 8
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 9
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 10
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 11
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 12
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 13
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 14
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 15
      m01_tsd_numberOfEvents=1
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
}
IOConfigList<OpalBoards_GUI::GenericSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/5DA3091B-19C5-48BA-955E-3842CF20DD8E
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
}
IOConfigList<OpalBoards_GUI::DigitalOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/B0E0D038-0BE7-4E39-93CF-3A9A5571AEF7
  items {
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 16
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 17
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 18
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 19
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 20
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 21
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 22
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 23
      m01_tsd_numberOfEvents=1
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
}
IOConfigList<OpalBoards_GUI::GenericSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/EFF01D62-A80D-4823-BF03-516262D3875A
  items {
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
}
IOConfigList<OpalBoards_GUI::DigitalOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12/535A0A13-9DF5-44CA-96E2-F224B9F21DB9
  items {
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 24
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 25
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 26
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 27
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 28
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 29
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 30
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 31
      m01_tsd_numberOfEvents=1
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/A63F99EE-C612-45E4-91F6-56D166E2CC12
}
IOConfigList<OpalBoards_GUI::AnalogOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41/39B62B2F-CCB1-4257-9B9B-26D616DBC97A
  items {
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 0
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 1
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 2
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 3
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 4
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 5
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 6
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 7
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41
}
IOConfigList<OpalBoards_GUI::AnalogOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41/A082C2D6-6CEF-4C2B-81BB-F15C03D03C5F
  items {
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 8
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 9
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 10
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 11
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 12
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 13
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 14
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 15
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/8BF045F3-CB22-430C-B81D-08625F8DDD41
}
IOConfigList<OpalBoards_GUI::GenericSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850/98E261CA-C9B5-4AF7-B800-5038FA802812
  items {
    item {
      m00_name=Channel 0
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 1
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 2
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 3
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 4
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 5
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 6
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 7
      m01_tsd_numberOfEvents=1
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850
}
IOConfigList<OpalBoards_GUI::GenericSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850/A3113A15-72F9-4D57-B8ED-BB8FBA64E278
  items {
    item {
      m00_name=Channel 8
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 9
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 10
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 11
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 12
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 13
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 14
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 15
      m01_tsd_numberOfEvents=1
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/51FDC8A2-93D0-4A4B-A566-2ACFC401C850
}
IOConfigList<OpalBoards_GUI::AnalogOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2/F705828A-AA91-44A1-8F9E-FAEB3B7E5456
  items {
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 0
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 1
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 2
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 3
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 4
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 5
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 6
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 7
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2
}
IOConfigList<OpalBoards_GUI::AnalogOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2/CE20B160-E3A3-4C33-A751-20D262C19DB1
  items {
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 8
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 9
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 10
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 11
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 12
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 13
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 14
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
    item {
      m02_gain=1
      m03_offset=0
      m04_minValue=-16
      m05_maxValue=16
      maxAllowedVoltage=16
      prevEhsSigSrcChoice=
      m00_name=Channel 15
      m01_tsd_numberOfEvents=1
      m01_signalSource {
        mAttemptedVal=-1
        mKey=
        mValue=-1
      }
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/E7B8FAD7-CBF4-42DD-A603-FCCF058895C2
}
IOConfigList<OpalBoards_GUI::GenericSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/76E6628D-0F38-4A54-810E-E802E16CCFD1/B6408D51-F4A8-41F1-B706-C376EB2337F8
  items {
    item {
      m00_name=Channel 0: Encoder 1 - Channel A
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 1: Encoder 1 - Channel B
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 2: Encoder 1 - Channel Z
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 3: Encoder 2 - Channel A
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 4: Encoder 2 - Channel B
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 5: Encoder 2 - Channel Z
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 6 (unused)
      m01_tsd_numberOfEvents=1
    }
    item {
      m00_name=Channel 7 (unused)
      m01_tsd_numberOfEvents=1
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/76E6628D-0F38-4A54-810E-E802E16CCFD1
}
IOConfigList<OpalBoards_GUI::DigitalOutSignal> {
  resizable=0
  name=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/712DDCF5-77C9-41B6-9719-A691558A1D47/27E86567-53E3-490D-A3D8-62E4E8A810E9
  items {
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 0: Encoder 1 - Channel A
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 1: Encoder 1 - Channel B
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 2: Encoder 1 - Channel Z
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 3: Encoder 2 - Channel A
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 4: Encoder 2 - Channel B
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 5: Encoder 2 - Channel Z
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 6 (unused)
      m01_tsd_numberOfEvents=1
    }
    item {
      m01_pwm_polarity=Active_high
      m02_pwm_waveMode=Asymmetric
      m03_pwm_initialPhase=0
      m04_pwm_deadTime=0
      m05_syncPwmUpdateTime=Beginning
      m06_syncPwmModelRatio=1
      m07_syncPwmPhase=0
      m08_syncPwmDeadTime=0
      m00_name=Channel 7 (unused)
      m01_tsd_numberOfEvents=1
    }
  }
  parent=A4F51266-E89C-458D-A6F7-74805C4A7906_Config7A1202DF-D7B2-40D7-97CD-9240BAD66CCA/central_board_slots/712DDCF5-77C9-41B6-9719-A691558A1D47
}