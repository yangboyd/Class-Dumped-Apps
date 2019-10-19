//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class GLUELabel, NSString, SPTCollectionTheme;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTCollectionRecentlyPlayedSectionHeaderView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    GLUELabel *_titleTextLabel;
    SPTCollectionTheme *_theme;
}

@property(retain, nonatomic) SPTCollectionTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GLUELabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)addConstraints;
- (void)dealloc;
- (id)initWithTitleText:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

