//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerView.h"

@class SCComposerScrollView, SCImpalaPublicProfileViewModel;

@interface SCImpalaPublicProfileView : SCComposerView
{
}

@property(readonly, nonatomic) SCComposerView *errorView;
@property(readonly, nonatomic) SCComposerView *secondaryActionSheet;
@property(readonly, nonatomic) SCComposerView *mainActionSheet;
@property(readonly, nonatomic) SCComposerView *headerBar;
@property(readonly, nonatomic) SCComposerView *tabViewSection;
@property(readonly, nonatomic) SCComposerScrollView *scrollView;
@property(retain, nonatomic) SCImpalaPublicProfileViewModel *viewModel;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
- (id)bundleName;
- (id)viewName;
- (id)init;

@end

