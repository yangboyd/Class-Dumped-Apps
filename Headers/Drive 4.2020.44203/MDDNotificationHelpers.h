//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MDDConfigurationBundleID><MDDConfigurationInstanceID;

@interface MDDNotificationHelpers : NSObject
{
    id <MDDConfigurationBundleID><MDDConfigurationInstanceID> _configuration;
}

+ (id)helpersWithConfiguration:(id)arg1;
- (void).cxx_destruct;
- (void)postProgressNotificationForSingleFileID:(id)arg1 fileGroupName:(id)arg2 bytesWritten:(long long)arg3 bytesTotal:(long long)arg4 object:(id)arg5;
- (void)postFailureNotificationForSingleFileID:(id)arg1 fileGroupName:(id)arg2 object:(id)arg3;
- (void)postNotificationForFileGroupName:(id)arg1 object:(id)arg2;
- (void)postNotificationForSingleFileID:(id)arg1 fileGroupName:(id)arg2 object:(id)arg3;
- (id)initWithConfiguration:(id)arg1;

@end

