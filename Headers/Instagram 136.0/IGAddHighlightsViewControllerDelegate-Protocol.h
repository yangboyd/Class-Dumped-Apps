//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGAddHighlightsViewController, NSString, NSURL;

@protocol IGAddHighlightsViewControllerDelegate <NSObject>
- (void)addHighlightsSheetDidCancel:(IGAddHighlightsViewController *)arg1;
- (void)addHighlightsSheet:(IGAddHighlightsViewController *)arg1 wantsNewReelWithTitle:(NSString *)arg2 cropRect:(struct CGRect)arg3 creationToken:(NSString *)arg4;
- (void)addHighlightsSheet:(IGAddHighlightsViewController *)arg1 didUpdateReelWithPK:(NSString *)arg2 added:(_Bool)arg3 title:(NSString *)arg4 coverURL:(NSURL *)arg5;
@end

