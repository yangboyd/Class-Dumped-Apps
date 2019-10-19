//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SPTNowPlayingNavigationBarTitleView, SPTTheme;

@interface SPTNowPlayingNavigationBarView : UIView
{
    SPTNowPlayingNavigationBarTitleView *_titleView;
    SPTTheme *_theme;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTNowPlayingNavigationBarTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (id)layout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 titleAttributes:(id)arg3 titleViewPresenterRegistry:(id)arg4;

@end

