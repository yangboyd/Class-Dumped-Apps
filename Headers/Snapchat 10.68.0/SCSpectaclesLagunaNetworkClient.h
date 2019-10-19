//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesCommunicationChannelDelegate-Protocol.h"
#import "SCSpectaclesMessageBufferDelegate-Protocol.h"
#import "SCSpectaclesNetworkClient-Protocol.h"

@class NSString, SCSpectaclesAEADPacketEncryptor, SCSpectaclesMessageBuffer, SCWeakTimer, VLKAmbaResponse;
@protocol SCSpectaclesCommunicationChannel, SCSpectaclesNetworkClientDelegate;

@interface SCSpectaclesLagunaNetworkClient : NSObject <SCSpectaclesCommunicationChannelDelegate, SCSpectaclesMessageBufferDelegate, SCSpectaclesNetworkClient>
{
    VLKAmbaResponse *_pendingDataResponse;
    _Bool _active;
    _Bool _connected;
    _Bool _suspended;
    _Bool _hasProcessedData;
    id <SCSpectaclesNetworkClientDelegate> _delegate;
    id <SCSpectaclesCommunicationChannel> _stream;
    SCSpectaclesMessageBuffer *_messageBuffer;
    SCSpectaclesAEADPacketEncryptor *_encryptor;
    SCWeakTimer *_activityTimer;
    double _networkTimeout;
    unsigned long long _outstandingResponses;
}

+ (id)_responseDescription:(id)arg1;
+ (id)_requestDescription:(id)arg1;
+ (id)_shortData:(id)arg1;
@property(nonatomic) unsigned long long outstandingResponses; // @synthesize outstandingResponses=_outstandingResponses;
@property(nonatomic) _Bool hasProcessedData; // @synthesize hasProcessedData=_hasProcessedData;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double networkTimeout; // @synthesize networkTimeout=_networkTimeout;
@property(retain, nonatomic) SCWeakTimer *activityTimer; // @synthesize activityTimer=_activityTimer;
@property(retain, nonatomic) SCSpectaclesAEADPacketEncryptor *encryptor; // @synthesize encryptor=_encryptor;
@property(retain, nonatomic) SCSpectaclesMessageBuffer *messageBuffer; // @synthesize messageBuffer=_messageBuffer;
@property(retain, nonatomic) id <SCSpectaclesCommunicationChannel> stream; // @synthesize stream=_stream;
@property(nonatomic) __weak id <SCSpectaclesNetworkClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)streamDidOpen;
- (void)streamDidWriteData;
- (void)streamDidReadData:(id)arg1;
- (void)streamDidError:(id)arg1;
- (void)streamDidEnd;
- (void)messageBufferReceivedData:(id)arg1 messageType:(unsigned long long)arg2;
- (void)_handleEncryptionSetupResponseData:(id)arg1;
- (void)_sendEncryptionSetupRequest:(id)arg1;
- (void)_exchangeNonces;
- (void)_handleReceivedResponse:(id)arg1;
- (void)_handleAmbaDataMessage:(id)arg1;
- (void)_handleAmbaResponseData:(id)arg1;
- (void)_checkIfResponseTimedOut;
- (void)_stopActivityTimer;
- (void)_startActivityTimer;
- (void)cancelOutstandingRequest;
- (void)sendNetworkRequest:(id)arg1;
- (void)halt;
- (void)suspend;
- (void)start;
- (void)dealloc;
- (id)initWithStream:(id)arg1 encryptionKey:(id)arg2 networkTimeout:(double)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

