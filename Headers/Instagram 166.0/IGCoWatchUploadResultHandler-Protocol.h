//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSString, UIImage;
@protocol IGCoWatchableMedia;

@protocol IGCoWatchUploadResultHandler <NSObject>
- (void)handleUploadStartedWithLocalId:(NSString *)arg1 uploadId:(NSString *)arg2 thumbnail:(UIImage *)arg3;
- (void)handleUploadFailureWithLocalId:(NSString *)arg1;
- (void)handleUploadSuccessWithLocalId:(NSString *)arg1 media:(id <IGCoWatchableMedia>)arg2;
@end

