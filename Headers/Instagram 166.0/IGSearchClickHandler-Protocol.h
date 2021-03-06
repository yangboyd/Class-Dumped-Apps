//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGNavigationController, IGSearchAnalyticsLogger, NSDictionary, NSString, NSURL;
@protocol IGSearchClickHandlerUIUpdater, IGSearchableItem;

@protocol IGSearchClickHandler <NSObject>
@property(nonatomic) __weak id <IGSearchClickHandlerUIUpdater> updateDelegate;
- (void)handleTapOnTextViewString:(NSString *)arg1 URL:(NSURL *)arg2;
- (void)handleTapOnDestructiveButtonForSearchableItem:(id <IGSearchableItem>)arg1 navigationController:(IGNavigationController *)arg2;
- (void)handleTapOnActionButtonForSearchableItem:(id <IGSearchableItem>)arg1 navigationController:(IGNavigationController *)arg2;
- (void)handleClickForSearchableItem:(id <IGSearchableItem>)arg1 query:(NSString *)arg2 searchSessionID:(NSString *)arg3 navigationController:(IGNavigationController *)arg4 navigationExtras:(NSDictionary *)arg5 logger:(IGSearchAnalyticsLogger *)arg6;
@end

