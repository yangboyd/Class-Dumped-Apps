//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

@class SPTHomeUISectionHeaderView;

@interface SPTHomeUISectionHeaderComponentView : HUGSThemableComponentView
{
    SPTHomeUISectionHeaderView *_sectionHeaderView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) SPTHomeUISectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

