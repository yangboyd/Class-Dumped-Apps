//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEVideoDraftManager : NSObject
{
}

+ (void)logAllDraftsInfo;
+ (id)stringWithOperation:(unsigned long long)arg1;
+ (void)trackDBFailedWithFunction:(id)arg1 operation:(unsigned long long)arg2 error:(id)arg3;
+ (void)trackDBPerformanceEndWithInterval:(double)arg1 func:(id)arg2 operation:(unsigned long long)arg3;
+ (unsigned long long)sizeOfDrafts;
+ (void)p_updateDraftSizeMapWithID:(id)arg1 size:(unsigned long long)arg2;
+ (unsigned long long)sizeWithDraftID:(id)arg1;
+ (void)setCacheDirPathWithID:(id)arg1;
+ (_Bool)enableHQVFrameWithModel:(id)arg1;
+ (void)trackService:(id)arg1 model:(id)arg2 action:(id)arg3 error:(id)arg4;
+ (_Bool)deleteDraftResourcesWithID:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteDraftWithID:(id)arg1 error:(id *)arg2;
+ (void)deleteDraftWithID:(id)arg1;
+ (void)clearAllEditBackUps;
+ (void)clearAllDraft;
+ (void)retrieveNewestDraftCoverWithCompletion:(CDUnknownBlockType)arg1;
+ (long long)draftCount;
+ (_Bool)hasDraft;
+ (_Bool)hasPublishBackUp;
+ (id)retrieveWithDraftId:(id)arg1;
+ (id)retrieveEditBackUps;
+ (id)retrieveDrafts;
+ (void)markAllPublishBackupAsDraft;
+ (void)saveInfoStickerPath:(id)arg1 draftID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)p_saveDraftForStitchWithPublishViewModel:(id)arg1 draftModel:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)__saveDraftWithPublishViewModel:(id)arg1 video:(id)arg2 backup:(_Bool)arg3 presaveHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)saveDraftWithPublishViewModel:(id)arg1 video:(id)arg2 backup:(_Bool)arg3 presaveHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)saveDraftWithPublishViewModel:(id)arg1 video:(id)arg2 backup:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)draftQueue;

@end

