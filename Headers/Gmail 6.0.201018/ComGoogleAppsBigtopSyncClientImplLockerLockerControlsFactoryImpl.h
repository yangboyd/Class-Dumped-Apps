//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplLockerApiLockerControlsFactory-Protocol.h"

@class NSString;
@protocol ComGoogleCommonTimeClock, JBTDateTimeFormatter, JBTLockerTranslator, JBTSettingsClient;

@interface ComGoogleAppsBigtopSyncClientImplLockerLockerControlsFactoryImpl : NSObject <ComGoogleAppsBigtopSyncClientImplLockerApiLockerControlsFactory>
{
    id <ComGoogleCommonTimeClock> clock_;
    id <JBTDateTimeFormatter> dateTimeFormatter_;
    id <JBTLockerTranslator> lockerTranslator_;
    id <JBTSettingsClient> settingsClient_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getProtoWithJBTLockerControls:(id)arg1;
- (id)createForDraftWithComGoogleCaribouLockerProtoLockerProto_LockerCapabilities:(id)arg1;
- (id)createForOutboundSentWithComGoogleCaribouLockerProtoLockerProto_LockerCapabilities:(id)arg1;
- (id)createForInboundWithComGoogleCaribouLockerProtoLockerProto_LockerCapabilities:(id)arg1 withBoolean:(_Bool)arg2;
- (id)createDefaultDraftInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

