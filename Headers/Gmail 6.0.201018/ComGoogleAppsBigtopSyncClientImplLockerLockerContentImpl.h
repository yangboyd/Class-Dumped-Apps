//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplLockerApiLockerContent-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplLockerLockerControlsFactoryImpl, ComGoogleCaribouLockerProtoLockerApiProto_LockerMessage, ComGoogleCaribouLockerProtoLockerProto_LockerId, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplLockerLockerMessageAttachment_FreshAttachmentDetailsFetcher, ComGoogleCommonTimeClock;

@interface ComGoogleAppsBigtopSyncClientImplLockerLockerContentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplLockerApiLockerContent>
{
    ComGoogleCaribouLockerProtoLockerProto_LockerId *lockerId_;
    ComGoogleCaribouLockerProtoLockerApiProto_LockerMessage *lockerMessage_;
    ComGoogleAppsBigtopSyncClientImplLockerLockerControlsFactoryImpl *lockerControlsFactory_;
    id <ComGoogleAppsBigtopSyncClientImplLockerLockerMessageAttachment_FreshAttachmentDetailsFetcher> freshAttachmentDetailsFetcher_;
    id <ComGoogleCommonTimeClock> clock_;
}

- (void)dealloc;
- (_Bool)requiresImageSanitization;
- (id)getAttachmentsWithJBTSmartMailComponentContext:(id)arg1 withBoolean:(_Bool)arg2;
- (id)getLockerControlsWithBoolean:(_Bool)arg1;
- (id)getSafeHtmlMessageBody;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

