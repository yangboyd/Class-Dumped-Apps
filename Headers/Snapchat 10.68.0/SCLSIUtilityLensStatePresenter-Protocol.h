//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCUtilityLensViewModel;
@protocol SCLSIUtilityLensStatePresenterDelegate;

@protocol SCLSIUtilityLensStatePresenter <NSObject>
@property(readonly, nonatomic) __weak id <SCLSIUtilityLensStatePresenterDelegate> delegate;
@property(readonly, copy, nonatomic) SCUtilityLensViewModel *viewModel;
- (_Bool)isPointInsideScanStateUI:(struct CGPoint)arg1;
- (void)hideScanStateUI;
- (void)previewScanStateUIForState:(unsigned long long)arg1 context:(struct NSString *)arg2;
- (void)showScanStateUIForState:(unsigned long long)arg1 context:(struct NSString *)arg2;
- (void)setViewModel:(SCUtilityLensViewModel *)arg1;
@end

