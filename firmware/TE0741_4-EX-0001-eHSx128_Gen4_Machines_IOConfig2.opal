OPAL-1.0 Object
OpalBoards_GUI::OpalBitstreamConfigFile {
    bitstreamFileName=TE0741_4-EX-0001-3_5_0_817-eHSx128_Gen4_Machines_IOConfig2-3C-17.bin
    slots {
        item {
            location=Slot_1_A
            supportedCards {
                item {
                    signalType=DIGITAL
                    direction=BOTH
                    isDirConfigurable=1
                    isThresholdConfigurable=1
                    thresholdResolution=0.1176
                    mezzanineID=OP5369
                    description=OPAL-RT OP5369 Digital 32ch. Programmable threshold (resolution is 0.1176V) and direction per group of 8 ports
                    functionality=32-channel digital input/output interface. Compatibility: OP5369;  OP5353;  OP5360-1;  OP5360-2;  OP5360-3.
                    dynamicPhase_DeadTime=1
                    digitalBidirectionalOptions {
                        item {
                            defaultDirection=BOTH
                            defaultThresholdHigh=3.5
                            defaultThresholdLow=1.5
                            inputDirParameters {
                                isSelectable=1
                                dataPort=2
                            }
                            outputDirParameters {
                                isSelectable=1
                                dataPort=10
                                configPort=3
                            }
                        }
                        item {
                            defaultDirection=BOTH
                            defaultThresholdHigh=3.5
                            defaultThresholdLow=1.5
                            inputDirParameters {
                                isSelectable=1
                                dataPort=3
                            }
                            outputDirParameters {
                                isSelectable=1
                                dataPort=11
                                configPort=4
                            }
                        }
                        item {
                            defaultDirection=BOTH
                            defaultThresholdHigh=3.5
                            defaultThresholdLow=1.5
                            inputDirParameters {
                                isSelectable=1
                                dataPort=4
                            }
                            outputDirParameters {
                                isSelectable=1
                                dataPort=12
                                configPort=5
                            }
                        }
                        item {
                            defaultDirection=BOTH
                            defaultThresholdHigh=3.5
                            defaultThresholdLow=1.5
                            inputDirParameters {
                                isSelectable=1
                                dataPort=5
                            }
                            outputDirParameters {
                                isSelectable=1
                                dataPort=13
                                configPort=6
                            }
                        }
                    }
                }
            }
        }
        item {
            location=Slot_1_B
            supportedCards {
                item {
                    signalType=ANALOG
                    direction=OUT
                    mezzanineID=OP5330_3
                    description=OPAL-RT OP5330-3 Digital to Analog Mezzanine, Analog output channels : 16, Maximum current : 15mA 
                    functionality=16-channel analog output interface. Compatibility: OP5330-1;  OP5330-3.
                    reservingComponent=Unknown
                    analogOptions {
                        isRateConfigurable=1
			dataPort1=18
			dataPort2=19
                    }
                }
            }
        }
        item {
            location=Slot_2_A
            supportedCards {
                item {
                    signalType=ANALOG
                    direction=IN
                    mezzanineID=OP5342
                    description=OPAL-RT OP5342 Analog to Digital Mezzanine, Analog input channels : 16, Conversion time : 0.5us 
                    functionality=16-channel analog input interface. Compatibility: OP5342.
                    analogOptions {
                        dataPort1=6
                        dataPort2=7
                    }
                }
            }
        }
        item {
            location=Slot_2_B
            supportedCards {
                item {
                    signalType=ANALOG
                    direction=OUT
                    mezzanineID=OP5330_3
                    description=OPAL-RT OP5330-3 Digital to Analog Mezzanine, Analog output channels : 16, Maximum current : 15mA 
                    functionality=16-channel analog output interface. Compatibility: OP5330-1;  OP5330-3.
                    reservingComponent=Unknown
                    analogOptions {
                        isRateConfigurable=1
			dataPort1=20
			dataPort2=21
                    }
                }
            }
        }
        item {
            location=Slot_3_A
            supportedCards {
                item {
                    signalType=DIGITAL
                    direction=IN
                    mezzanineID=OP5969_1
                    description=OPAL-RT OP5969-1 RS422 - 6in and 6out
                    functionality=6-channel digital input/output interface. Compatibility: OP5969-2;  OP5969-1.
                    dynamicPhase_DeadTime=1
                    reservingComponent=Unknown
			digitalOptions {
				item {
					isSelectable=0
					staticType=Digital_quad_encoder_in
					dataPort=9
					configPort=18
				}
			}
                }
            }
        }
        item {
            location=Slot_3_B
            supportedCards {
                item {
                    signalType=DIGITAL
                    direction=OUT
                    mezzanineID=OP5969_1
                    description=OPAL-RT OP5969-1 RS422 - 6in and 6out
                    functionality=6-channel digital input/output interface. Compatibility: OP5969-2;  OP5969-1.
                    dynamicPhase_DeadTime=1
                    reservingComponent=Unknown
			digitalOptions {
				item {
					isSelectable=0
					staticType=Digital_quad_encoder_out
					dataPort=30
					configPort=22
				}
			}
                }
            }
        }
    }
	rawData {
		presentInBitstream=true
		dataToBoard {
			item {
				port=31
				type=U32
				expectedDWORDCount=2
			}
		}
	}
}
