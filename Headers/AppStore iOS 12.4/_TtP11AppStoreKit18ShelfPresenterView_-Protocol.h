//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP11AppStoreKit19ActionPresenterView_-Protocol.h"
#import "_TtP11AppStoreKit23ReloadablePresenterView_-Protocol.h"

@class ASKShelfContentTypeSet, NSError, NSIndexPath, NSIndexSet, NSNumber;

@protocol _TtP11AppStoreKit18ShelfPresenterView_ <_TtP11AppStoreKit19ActionPresenterView_, _TtP11AppStoreKit23ReloadablePresenterView_>
- (void)reloadDataAt:(NSIndexPath *)arg1;
- (void)reloadShelvesAt:(NSIndexSet *)arg1;
- (void)showWithShelfError:(NSError *)arg1 for:(NSNumber *)arg2;
- (void)prepareToDisplayWithTypes:(ASKShelfContentTypeSet *)arg1;
@end

