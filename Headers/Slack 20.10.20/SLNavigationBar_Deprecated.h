//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

#import "UISearchBarDelegate-Protocol.h"

@class NSString, SLKDependencies, SLNavigationController_Deprecated, UIView;

@interface SLNavigationBar_Deprecated : UINavigationBar <UISearchBarDelegate>
{
    UIView *teamContainer;
    SLNavigationController_Deprecated *_navController;
    UIView *_hairlineView;
    SLKDependencies *_dependencies;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SLKDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) UIView *hairlineView; // @synthesize hairlineView=_hairlineView;
@property(nonatomic) __weak SLNavigationController_Deprecated *navController; // @synthesize navController=_navController;
- (void)dealloc;
- (void)updateTheme;
- (void)setHairlineColor:(id)arg1;
- (void)setHairlineHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

