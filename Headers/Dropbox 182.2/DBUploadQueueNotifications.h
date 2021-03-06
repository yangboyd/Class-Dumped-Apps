//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBUploadQueueNotifications : NSObject
{
}

+ (void)postUploadQueuedNotificationWithUploadQueue:(id)arg1 upload:(id)arg2 uploadFilePath:(id)arg3;
+ (void)postUploadsCanceledNotificationWithUploadQueue:(id)arg1 uploads:(id)arg2;
+ (void)postUploadFSWsEncounteredNotificationWithUploadQueue:(id)arg1 upload:(id)arg2;
+ (void)postUploadFailedNotificationWithUploadQueue:(id)arg1 upload:(id)arg2 errorCodeNumber:(id)arg3 errorMessage:(id)arg4 uploadFilePath:(id)arg5;
+ (void)postUploadSucceededNotificationWithUploadQueue:(id)arg1 upload:(id)arg2 uploadFilePath:(id)arg3;
+ (void)postUploadProgressNotificationWithUploadQueue:(id)arg1 progress:(id)arg2 uploadFilePath:(id)arg3;
+ (void)postUploadBeganNotificationWithUploadQueue:(id)arg1;
+ (void)postUploadsEndedNotificationWithUploadQueue:(id)arg1;
+ (void)postUploadsStartedNotificationWithUploadQueue:(id)arg1;
+ (void)postUploadsDidFinishLoadingNotificationWithUploadQueue:(id)arg1;

@end

