//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol YTOfflineImageControllerObserver <NSObject>

@optional
- (void)didRepairOfflineImages;
- (void)didDeleteOfflineImageWithFilename:(NSString *)arg1;
- (void)didSaveOfflineImageWithFilename:(NSString *)arg1 videoIDs:(NSArray *)arg2 playlistIDs:(NSArray *)arg3 videoListIDs:(NSArray *)arg4;
@end

