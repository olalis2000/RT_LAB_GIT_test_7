OPAL-1.0 Object
DataLogger::Configuration {
  m01_recordMode=Automatic
  m05_useRTCore=0
  m06_verbose=0
  m09_noDataLoss=0
  m13_usageMode=Basic
  m14_logLevel=Minimal
  m15_toolPriority=NORMAL
  m17_showDLTConsole=0
  name=724F19F0-1C18-4A78-9CEC-90F9244A2FD9_ConfigF58062EA-AF09-4EF3-9CFF-8BDFAF8592A5
  m10_signalGroupConfigList=724F19F0-1C18-4A78-9CEC-90F9244A2FD9_ConfigF58062EA-AF09-4EF3-9CFF-8BDFAF8592A5/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=724F19F0-1C18-4A78-9CEC-90F9244A2FD9_ConfigF58062EA-AF09-4EF3-9CFF-8BDFAF8592A5/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=F404F9EC-3D03-422E-926A-E394BE33996D-default/SyncExchangerRegistry/B246B273-29F9-49FD-9E45-1D17176B9D75/724F19F0-1C18-4A78-9CEC-90F9244A2FD9_ConfigF58062EA-AF09-4EF3-9CFF-8BDFAF8592A5/SignalGroupConfigList
      instance {
        guid=44E1CE8E-B36F-49B5-A3C9-4736DBECD859
        m003_recordMode=Inherit
        m006_exportFormat=OPREC
        m007_fileAutoNaming=1
        m010_fileName=data
        m011_decimationFactor=1
        m015_frameLength=1
        m016_frameLengthUnits=Seconds
        m020_nbRecordedFrames=10
        m021_fileLength=10
        m022_fileLengthUnits=Seconds
        m11_showTriggerConfiguration=1
        m12_triggerReferenceValue=0
        m13_triggerMode=Normal
        m14_triggerFunction=Edge
        m15_triggerPolarity=Positive
        m18_preTriggerPercent=0
        m19_triggerHoldoff=0
        m20_triggerSignalPath=
        m35_enableSubFraming=1
        m36_subFrameSizeMillis=10
      }
    }
  }
  parent=724F19F0-1C18-4A78-9CEC-90F9244A2FD9_ConfigF58062EA-AF09-4EF3-9CFF-8BDFAF8592A5
}