/*
 * ©2022 Zebra Technologies LLC. All rights reserved.
 */

#ifndef SAMPLEEVENTLISTENER_H_
#define SAMPLEEVENTLISTENER_H_



#include "CsIEventListenerXml.h"
#include "CsUserDefs.h"
#include "CsBarcodeTypes.h"
#include "Cslibcorescanner_xml.h"

/* standard C includes */
#include <stdio.h>
#include <stdlib.h>

/* standard template library includes */
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <string>
#include <iostream>
#include <sstream>
#include <QString>
#include <functional>

using namespace std;
using namespace boost::property_tree;

typedef struct BC_DATA_TYPE
{
    QString barcodeDataType;
    QString barcodeData;
}BcDataType;

typedef function<void()> CallbackFn;


class SampleEventListener : public IEventListenerXml
{
public:
    explicit SampleEventListener(BcDataType *_BcData, CallbackFn _callbackfn);
	virtual ~SampleEventListener();

    virtual void OnImageEvent( short eventType, int size, short imageFormat, char* sfimageData, int dataLength, std::string& pScannerData );
    virtual void OnVideoEvent( short eventType, int size, char* sfvideoData, int dataLength, std::string& pScannerData );
    virtual void OnBarcodeEvent( short eventType, std::string& pscanData );
    virtual void OnPNPEvent( short eventType, std::string ppnpData );
    virtual void OnCommandResponseEvent( short status, std::string& prspData );
    virtual void OnScannerNotification( short notificationType, std::string& pScannerData );
    virtual void OnIOEvent( short type, unsigned char data );
    virtual void OnScanRMDEvent( short eventType, std::string& prmdData );
    virtual void OnDisconnect();
    virtual void OnBinaryDataEvent( short eventType, int size, short dataFormat, unsigned char* sfBinaryData, std::string&  pScannerData);


    StatusID Open();
    void GetScanners();
    void GetAttribute();
    void GetAttributeNext();
    void GetAllAttributes();
    void SetAttribute();
    void SetAttributeStore();
    void SetZeroWeight();
    void Close();
    
    void RebootScanner();
    void ExecuteActionCommand(CmdOpcode opCode);
    void GetDeviceTopology();
    void FirmwareUpdate();
    void FirmwareUpdateFromPlugin();
    void StartNewFirmware();
    void AbortFirmwareUpdate();
    void GetVersion();
    void SwitchHostMode();
private:
    BcDataType* m_barcodeData;
    CallbackFn m_callbackFunction;
};


#endif /* SAMPLEEVENTLISTENER_H_ */
