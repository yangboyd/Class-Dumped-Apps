//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectPostMessageCell, IGImageRequestSummary, NSError, NSNumber, NSString, UIImage;

@protocol IGDirectPostMessageCellImageViewDelegate <NSObject>
- (void)directPostMessageCell:(IGDirectPostMessageCell *)arg1 didFailLoadWithError:(NSError *)arg2 networkRequestSummary:(IGImageRequestSummary *)arg3;
- (void)directPostMessageCell:(IGDirectPostMessageCell *)arg1 didLoadImage:(UIImage *)arg2 loadSource:(NSString *)arg3 networkRequestSummary:(IGImageRequestSummary *)arg4;
- (void)directPostMessageCell:(IGDirectPostMessageCell *)arg1 didLoadPreviewImage:(UIImage *)arg2 progressiveJPEGScanNumber:(NSNumber *)arg3;
@end

