//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

#import "WAMessagePaymentActionButtonSliceDelegate-Protocol.h"

@class NSString, UIButton, UIView, WAMessagePaymentActionButtonSlice;

@interface WAMessagePaymentActionButtonSliceView : WAMessageContainerSliceView <WAMessagePaymentActionButtonSliceDelegate>
{
    UIView *_topBorder;
    UIButton *_button;
}

+ (_Bool)supportsPreviewing;
+ (_Bool)isUserInteractionEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)paymentMessageActionButtonSliceDidInvalidateLayout:(id)arg1;
- (id)wa_accessibilityElements;
- (void)buttonTapped:(id)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WAMessagePaymentActionButtonSlice *slice; // @dynamic slice;
@property(readonly) Class superclass;

@end

