//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPostShareListener-Protocol.h>

@class NSString;
@protocol IGPendingStoryItemStatusDelegate, IGReelOwnerType;

@interface IGPendingStoryItemStatusObserver : NSObject <IGPostShareListener>
{
    id <IGPendingStoryItemStatusDelegate> _delegate;
    NSString *_uploadID;
    unsigned long long _status;
    double _progress;
    unsigned long long _failedReason;
    id <IGReelOwnerType> _reelOwner;
    NSString *_shareID;
}

@property(retain, nonatomic) NSString *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) id <IGReelOwnerType> reelOwner; // @synthesize reelOwner=_reelOwner;
@property(nonatomic) unsigned long long failedReason; // @synthesize failedReason=_failedReason;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
@property(nonatomic) __weak id <IGPendingStoryItemStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)postShare:(id)arg1 didRenderVideoAtUrl:(id)arg2;
- (void)postShare:(id)arg1 didUpdateStatus:(long long)arg2 serverResponse:(id)arg3;
- (void)postShare:(id)arg1 didUpdateProgress:(double)arg2;
- (void)setupUploadStatusObservationWithPostCreationManager:(id)arg1 postShare:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

