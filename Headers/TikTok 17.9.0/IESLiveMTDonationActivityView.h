//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLiveMTOrganizationViewProtocol-Protocol.h"

@class NSString;

@interface IESLiveMTDonationActivityView : UIView <IESLiveMTOrganizationViewProtocol>
{
    CDUnknownBlockType dismissCompletion;
    CDUnknownBlockType goToNext;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType goToNext; // @synthesize goToNext;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletion; // @synthesize dismissCompletion;
- (void)showDonateList:(id)arg1;
- (long long)naviBarStyle;
- (void)setUp;
- (void)addDespViewWithOffsetY:(double)arg1 forWhitePanel:(id)arg2 withDesp:(id)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)hideNavigationBar;
- (void)updateWithContext:(id)arg1;
- (id)collectionView;
- (_Bool)constHeight;
- (double)viewHeight;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType selectSticker;
@property(readonly) Class superclass;

@end

