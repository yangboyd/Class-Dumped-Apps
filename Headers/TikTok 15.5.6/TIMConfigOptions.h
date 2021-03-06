//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "TIMConfigGeneratorProtocol-Protocol.h"
#import "TIMConfigProtocol-Protocol.h"

@class NSSet, NSString;

@interface TIMConfigOptions : MTLModel <TIMConfigProtocol, TIMConfigGeneratorProtocol>
{
    _Bool _manuallyKickoffInboxPuller;
    _Bool _enableCombineInboxCheck;
    _Bool _overrideSentMessageContentSyncFromServer;
    _Bool _enableLocalOnlyLoadHistory;
    _Bool _enableRecall;
    _Bool _isIMImportant;
    _Bool _enableApplicationStatusReport;
    _Bool _enableSyncClickToReceiver;
    NSString *_imServerBaseURL;
    long long _service;
    long long _method;
    long long _maxPayloadLength;
    NSString *_fpID;
    NSString *_appID;
    NSString *_deviceID;
    NSString *_wsServerBaseURL;
    NSString *_wsAppKey;
    CDUnknownBlockType _wsParamsGenerator;
    NSSet *_inboxes;
    NSSet *_inboxesDisableUserChain;
    NSString *_appDistributionChannel;
    NSString *_devicePlatform;
    NSString *_deviceType;
    NSString *_osVersion;
    NSString *_appVersionCode;
}

@property _Bool enableSyncClickToReceiver; // @synthesize enableSyncClickToReceiver=_enableSyncClickToReceiver;
@property _Bool enableApplicationStatusReport; // @synthesize enableApplicationStatusReport=_enableApplicationStatusReport;
@property _Bool isIMImportant; // @synthesize isIMImportant=_isIMImportant;
@property(copy) NSString *appVersionCode; // @synthesize appVersionCode=_appVersionCode;
@property(copy) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(copy) NSString *appDistributionChannel; // @synthesize appDistributionChannel=_appDistributionChannel;
@property _Bool enableRecall; // @synthesize enableRecall=_enableRecall;
@property _Bool enableLocalOnlyLoadHistory; // @synthesize enableLocalOnlyLoadHistory=_enableLocalOnlyLoadHistory;
@property _Bool overrideSentMessageContentSyncFromServer; // @synthesize overrideSentMessageContentSyncFromServer=_overrideSentMessageContentSyncFromServer;
@property _Bool enableCombineInboxCheck; // @synthesize enableCombineInboxCheck=_enableCombineInboxCheck;
@property _Bool manuallyKickoffInboxPuller; // @synthesize manuallyKickoffInboxPuller=_manuallyKickoffInboxPuller;
@property(copy) NSSet *inboxesDisableUserChain; // @synthesize inboxesDisableUserChain=_inboxesDisableUserChain;
@property(copy) NSSet *inboxes; // @synthesize inboxes=_inboxes;
@property(copy) CDUnknownBlockType wsParamsGenerator; // @synthesize wsParamsGenerator=_wsParamsGenerator;
@property(copy) NSString *wsAppKey; // @synthesize wsAppKey=_wsAppKey;
@property(copy) NSString *wsServerBaseURL; // @synthesize wsServerBaseURL=_wsServerBaseURL;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy) NSString *appID; // @synthesize appID=_appID;
@property(copy) NSString *fpID; // @synthesize fpID=_fpID;
@property long long maxPayloadLength; // @synthesize maxPayloadLength=_maxPayloadLength;
@property long long method; // @synthesize method=_method;
@property long long service; // @synthesize service=_service;
- (void).cxx_destruct;
@property(copy) NSString *imServerBaseURL; // @synthesize imServerBaseURL=_imServerBaseURL;
- (id)_fetchDeviceType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

