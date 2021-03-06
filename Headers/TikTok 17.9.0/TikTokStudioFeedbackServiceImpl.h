//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TikTokStudioFeedbackServiceProtocol-Protocol.h"

@class NSString;

@interface TikTokStudioFeedbackServiceImpl : NSObject <TikTokStudioFeedbackServiceProtocol>
{
}

- (void)recordForVideoUpload:(unsigned long long)arg1 code:(long long)arg2 stage:(long long)arg3;
- (void)recordForVideoRecord:(unsigned long long)arg1 code:(long long)arg2;
- (void)recordForVideoMerge:(unsigned long long)arg1 code:(long long)arg2;
- (void)recordForTotalVideoDraft:(unsigned long long)arg1 code:(long long)arg2 draftCreationData:(id)arg3;
- (void)recordForSaveVideoDraft:(unsigned long long)arg1 code:(long long)arg2;
- (void)recordForLoadVideoDraft:(unsigned long long)arg1 code:(long long)arg2;
- (void)recordForDeleteVideoDraft:(unsigned long long)arg1 code:(long long)arg2;
- (void)recordForCameraInit:(unsigned long long)arg1 code:(long long)arg2;
- (void)awe_studioRegisterParsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

