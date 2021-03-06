//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBDbxCurrentUploadInfo, NSString;

@interface DBDbxCameraUploadsStatusSnapshot : NSObject
{
    _Bool _isControllerIdle;
    int _numUserPendingUploads;
    int _numQueuedVideoUploads;
    int _numPhotosWithSyncErrors;
    long long _status;
    DBDbxCurrentUploadInfo *_currentUploadInfo;
    NSString *_cuFolderPathRelativeToUserRoot;
}

+ (id)dbxCameraUploadsStatusSnapshotWithStatus:(long long)arg1 currentUploadInfo:(id)arg2 numUserPendingUploads:(int)arg3 numQueuedVideoUploads:(int)arg4 numPhotosWithSyncErrors:(int)arg5 isControllerIdle:(_Bool)arg6 cuFolderPathRelativeToUserRoot:(id)arg7;
@property(readonly, nonatomic) NSString *cuFolderPathRelativeToUserRoot; // @synthesize cuFolderPathRelativeToUserRoot=_cuFolderPathRelativeToUserRoot;
@property(readonly, nonatomic) _Bool isControllerIdle; // @synthesize isControllerIdle=_isControllerIdle;
@property(readonly, nonatomic) int numPhotosWithSyncErrors; // @synthesize numPhotosWithSyncErrors=_numPhotosWithSyncErrors;
@property(readonly, nonatomic) int numQueuedVideoUploads; // @synthesize numQueuedVideoUploads=_numQueuedVideoUploads;
@property(readonly, nonatomic) int numUserPendingUploads; // @synthesize numUserPendingUploads=_numUserPendingUploads;
@property(readonly, nonatomic) DBDbxCurrentUploadInfo *currentUploadInfo; // @synthesize currentUploadInfo=_currentUploadInfo;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStatus:(long long)arg1 currentUploadInfo:(id)arg2 numUserPendingUploads:(int)arg3 numQueuedVideoUploads:(int)arg4 numPhotosWithSyncErrors:(int)arg5 isControllerIdle:(_Bool)arg6 cuFolderPathRelativeToUserRoot:(id)arg7;

@end

