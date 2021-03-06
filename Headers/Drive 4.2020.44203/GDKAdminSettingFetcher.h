//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTLRIDriveService, NSURL;
@protocol OS_dispatch_queue;

@interface GDKAdminSettingFetcher : NSObject
{
    GTLRIDriveService *_driveService;
    NSURL *_userSecureLinkSettingCacheURL;
    NSObject<OS_dispatch_queue> *_adminSettingFetcherQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *adminSettingFetcherQueue; // @synthesize adminSettingFetcherQueue=_adminSettingFetcherQueue;
@property(readonly, nonatomic) NSURL *userSecureLinkSettingCacheURL; // @synthesize userSecureLinkSettingCacheURL=_userSecureLinkSettingCacheURL;
@property(readonly, nonatomic) GTLRIDriveService *driveService; // @synthesize driveService=_driveService;
- (_Bool)cachedAdminOptedOutSettingValue;
- (void)fetchAndCacheAdminOptedOutSettingWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (id)initWithDriveService:(id)arg1 userSecureLinkSettingCacheURL:(id)arg2;

@end

