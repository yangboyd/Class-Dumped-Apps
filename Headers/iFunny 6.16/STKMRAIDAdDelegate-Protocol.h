//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSError, NSURL, STKMRAIDAd;

@protocol STKMRAIDAdDelegate <NSObject>
- (void)didUserInteractionAd:(STKMRAIDAd *)arg1 withURL:(NSURL *)arg2;
- (void)didFailToLoadAd:(STKMRAIDAd *)arg1 withError:(NSError *)arg2;
- (void)didLoadAd:(STKMRAIDAd *)arg1;
@end

