//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, YTIAutoplayRenderer, YTIFormattedString, YTIPlayerOverlayAutoplayRenderer;

@protocol YTUpdatedMetadataServiceObserver <NSObject>
- (void)didUpdateDonationProgress:(float)arg1 donatedAmount:(YTIFormattedString *)arg2 forVideoID:(NSString *)arg3;
- (void)didUpdateExtraShortVideoViewCount:(YTIFormattedString *)arg1 forVideoID:(NSString *)arg2;

@optional
- (void)didUpdateAutoplayRenderer:(YTIAutoplayRenderer *)arg1 playerOverlayAutoplayRenderer:(YTIPlayerOverlayAutoplayRenderer *)arg2 forVideoID:(NSString *)arg3;
@end

