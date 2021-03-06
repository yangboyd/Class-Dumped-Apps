//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol TikTokStudioKidsModuleService <HTSService>
- (NSURL *)localVideoStorageURLWithAwemeID:(NSString *)arg1 videoURI:(NSString *)arg2;
- (void)startStudioCacheCleanSafely;
- (void)clearStudioCache;
- (void)createVideoFromMusicWithInfo:(NSDictionary *)arg1;
- (void)ensureLoginRequirementsForVideoRecording:(void (^)(_Bool))arg1 withTrackerInformation:(NSDictionary *)arg2;
- (void)ensureLoginRequirementsForVideoRecording:(void (^)(_Bool))arg1;
- (long long)draftCount;
- (void)fetchDraftCoverWithhCompletion:(void (^)(UIImage *, NSError *))arg1;
- (void)recoveryBackUpIfNeed;
- (_Bool)isInsideRecorder;
@end

