//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEFileUploader;

@interface LiveFeedBackDataManager : NSObject
{
    AWEFileUploader *_fileUploader;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWEFileUploader *fileUploader; // @synthesize fileUploader=_fileUploader;
- (void).cxx_destruct;
- (void)uploadImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postFeedbackMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logAppState;
- (void)uploadALogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)postFeedbackMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFeedBackMessageFromRemote:(CDUnknownBlockType)arg1;
- (void)checkIfNewMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFeedbackMessageFromLocal:(CDUnknownBlockType)arg1;
- (id)init;
- (void)clear;
- (_Bool)saveNewestFeedbackID:(id)arg1;
- (id)fetchNewestFeedbackID;
- (id)persistFeedbackModel:(id)arg1;
- (id)fetchFeedbackFromLocal;

@end

