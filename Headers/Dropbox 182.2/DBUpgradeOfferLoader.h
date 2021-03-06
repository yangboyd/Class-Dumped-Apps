//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBPayments, _TtC7Dropbox23DBUpgradeProductMatcher;
@protocol NSObject;

@interface DBUpgradeOfferLoader : NSObject
{
    DBPayments *_payments;
    id <NSObject> _paymentStatusChangedHandle;
    CDUnknownBlockType _completion;
    _TtC7Dropbox23DBUpgradeProductMatcher *_productMatcher;
    _TtC7Dropbox23DBUpgradeProductMatcher *_fallbackProductMatcher;
}

- (void).cxx_destruct;
- (void)db_callCompletion:(id)arg1;
- (id)db_pickOffer;
- (void)db_waitForLoadingCompletion;
- (void)loadWithProductMatcher:(id)arg1 fallbackProductMatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithPayments:(id)arg1;

@end

