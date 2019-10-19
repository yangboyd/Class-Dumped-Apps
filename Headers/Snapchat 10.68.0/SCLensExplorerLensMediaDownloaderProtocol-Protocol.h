//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL, SCFuture, SCLensExplorerLensItem;

@protocol SCLensExplorerLensMediaDownloaderProtocol <NSObject>
- (void)lensExplorerItemsBecomeHidden:(NSArray *)arg1;
- (SCFuture *)downloadImageWithURL:(NSURL *)arg1 preferredSize:(struct CGSize)arg2;
- (SCFuture *)downloadAnimationForLensExplorerItem:(SCLensExplorerLensItem *)arg1 preferredSize:(struct CGSize)arg2;
@end

