//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSEntityTappableUIItem-Protocol.h"

@class GMSMarkupProvider, NSString;

@interface GMSMarkupTapItem : NSObject <GMSEntityTappableUIItem>
{
    unsigned long long _itemID;
    GMSMarkupProvider *_provider;
    struct GMSEntityTapOrdering _tapOrdering;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)matchesTappableUIItem:(id)arg1;
- (_Bool)shouldMoveToEndOnTap;
- (void)wasTapped;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 coords:(struct CGPoint)arg2 camera:(const reffed_ptr_329922e5 *)arg3;
- (struct GMSEntityTapOrdering)tapOrdering;
- (id)initWithItemID:(unsigned long long)arg1 provider:(id)arg2 tapPriority:(struct GMSEntityTapPriority)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

