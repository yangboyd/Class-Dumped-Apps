//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXResultsCellBase.h"

#import "SXAutomotiveEUAlertViewDelegate-Protocol.h"
#import "SXResultsCellRequired-Protocol.h"

@class NSString, SRDSSearchAutomotiveStripeWidgetModel, SXAutomotiveEUAlertView, UIButton;
@protocol SXAutomotiveEUStripeCellDelegate;

@interface SXAutomotiveEUStripeCell : SXResultsCellBase <SXAutomotiveEUAlertViewDelegate, SXResultsCellRequired>
{
    UIButton *_filterByVehicleButton;
    UIButton *_checkAnotherVehicleButton;
    SRDSSearchAutomotiveStripeWidgetModel *_model;
    SXAutomotiveEUAlertView *_alertView;
}

+ (unsigned char)isAutomotiveDataPlatformSupportedMarketplace:(id)arg1;
+ (unsigned char)isEUMarketPlace:(id)arg1;
+ (id)sizingCell;
@property(retain, nonatomic) SXAutomotiveEUAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) SRDSSearchAutomotiveStripeWidgetModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *checkAnotherVehicleButton; // @synthesize checkAnotherVehicleButton=_checkAnotherVehicleButton;
@property(retain, nonatomic) UIButton *filterByVehicleButton; // @synthesize filterByVehicleButton=_filterByVehicleButton;
- (void).cxx_destruct;
- (void)clearFilterButtonPressed:(id)arg1;
- (id)buildAttributedTextFromStyledText:(id)arg1 withTextColor:(id)arg2;
- (id)extractTextFromStyledText:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeAndLayoutToFit:(struct CGSize)arg1 setFrames:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)createStripeWithAlertType:(long long)arg1 withMessage:(id)arg2 withClearButtonText:(id)arg3;
- (void)alertMessageTapped:(id)arg1;
- (void)didCheckAnotherVehicleButtonPressed;
- (void)didFilterByVehicleButtonPressed;
- (void)initializeAlertView:(id)arg1 withClearButtonText:(id)arg2;
- (id)createCheckAnotherVehicleButtonWithSelector:(SEL)arg1;
- (id)createFilterByVehicleButtonWithSelector:(SEL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SXAutomotiveEUStripeCellDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

