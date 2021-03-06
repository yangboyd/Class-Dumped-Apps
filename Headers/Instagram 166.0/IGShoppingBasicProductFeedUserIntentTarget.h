//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBIntentTarget-Protocol.h>

@class IGSessionTracker, NSString;
@protocol IGShoppingBasicProductFeedServiceType, IGShoppingBasicProductFeedViewControllerDelegate;

@interface IGShoppingBasicProductFeedUserIntentTarget : NSObject <FBIntentTarget>
{
    id <IGShoppingBasicProductFeedServiceType> _service;
    id <IGShoppingBasicProductFeedViewControllerDelegate> _delegate;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
@property(readonly, nonatomic) id <IGShoppingBasicProductFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IGShoppingBasicProductFeedServiceType> service; // @synthesize service=_service;
- (id)initWithService:(id)arg1 delegate:(id)arg2 shoppingSessionTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

