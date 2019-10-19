//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface RLMSyncSession : NSObject
{
    struct weak_ptr<realm::SyncSession> _session;
}

+ (id)notificationsQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addProgressNotificationForDirection:(unsigned long long)arg1 mode:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)waitForDownloadCompletionOnQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)waitForUploadCompletionOnQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long state;
- (id)parentUser;
@property(readonly, nonatomic) NSURL *realmURL;
- (id)configuration;
- (id)initWithSyncSession:(shared_ptr_3c92bca6)arg1;

@end

