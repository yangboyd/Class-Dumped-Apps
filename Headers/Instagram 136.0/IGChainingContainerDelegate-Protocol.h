//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGChainingContainerViewController, IGFeedItem, NSString;

@protocol IGChainingContainerDelegate <NSObject>
- (void)chainingContainer:(IGChainingContainerViewController *)arg1 didTapSendButtonForFeedItem:(IGFeedItem *)arg2;
- (void)chainingContainer:(IGChainingContainerViewController *)arg1 didRetrieveChainingPaginationToken:(NSString *)arg2;
- (_Bool)shouldShowPillForChainingController:(IGChainingContainerViewController *)arg1;
- (void)chainingContainerDidShowPill:(IGChainingContainerViewController *)arg1;
- (double)chainingContainerAdditionalBottomInsetForPill:(IGChainingContainerViewController *)arg1;
@end

