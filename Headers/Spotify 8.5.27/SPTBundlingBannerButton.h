//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEButton.h"

@class SPTBundlingBannerButtonViewModel;

@interface SPTBundlingBannerButton : GLUEButton
{
    SPTBundlingBannerButtonViewModel *_viewModel;
}

@property(retain, nonatomic) SPTBundlingBannerButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setupTitle;
- (void)setupStyle;
- (id)initWithViewModel:(id)arg1;

@end

