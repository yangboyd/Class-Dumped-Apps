//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BDXLynxScrollViewBounceView-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface AWEGeneralSearchScrollTailView : UIView <BDXLynxScrollViewBounceView>
{
    UILabel *_label;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)updateHasMore:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)bdx_updateOverflowText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

