//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OGLGMAccountSelectorCellBase.h"

#import "OGLGM2AccountSelectorCell-Protocol.h"

@class NSString, OGLPrivacyPolicyToSFooterViewController;

@interface OGLGM2AccountSelectorPrivacyFooterCell : OGLGMAccountSelectorCellBase <OGLGM2AccountSelectorCell>
{
    OGLPrivacyPolicyToSFooterViewController *_privacyFooterViewController;
}

+ (double)heightWithItem:(id)arg1 constrainToCellWidth:(double)arg2 tableView:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) OGLPrivacyPolicyToSFooterViewController *privacyFooterViewController; // @synthesize privacyFooterViewController=_privacyFooterViewController;
- (_Bool)rippleTouchController:(id)arg1 shouldProcessRippleTouchesAtTouchLocation:(struct CGPoint)arg2;
- (void)resetCornerRadius;
- (void)setBottomCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double horizontalInset;
@property(readonly) Class superclass;

@end

