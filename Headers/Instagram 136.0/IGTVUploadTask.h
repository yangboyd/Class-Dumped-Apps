//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPostCreationManager, IGUserSession, NSString;

@interface IGTVUploadTask : NSObject
{
    IGPostCreationManager *_postCreationManager;
    NSString *_uploadID;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)completeShareWithMetadata:(id)arg1 forUserPK:(id)arg2;
- (void)uploadCoverImage:(id)arg1;
- (id)_initWithComposition:(id)arg1 postCreationManager:(id)arg2 userSession:(id)arg3 uploadId:(id)arg4;
- (id)initWithComposition:(id)arg1 postCreationManager:(id)arg2 userSession:(id)arg3;

@end

