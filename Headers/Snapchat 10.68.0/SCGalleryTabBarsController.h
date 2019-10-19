//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryTabBarDelegate-Protocol.h"

@class NSArray, NSString, SCGalleryTabBar, SCUserSession, SIGTabBarView, UIView;
@protocol SCGalleryTabBarsControllerDelegate;

@interface SCGalleryTabBarsController : NSObject <SCGalleryTabBarDelegate>
{
    SCUserSession *_userSession;
    NSArray *_tabControllers;
    SCGalleryTabBar *_primaryTabBar;
    _Bool _useV11Theme;
    SIGTabBarView *_tabBarView;
    NSArray *_tabBarViewItems;
    id <SCGalleryTabBarsControllerDelegate> _delegate;
    UIView *_containerView;
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCGalleryTabBarsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)galleryTabBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)_handleTabBarViewItemTap:(id)arg1;
- (void)_updateTabBarViewWithTabControllers:(id)arg1 highlightedTabController:(id)arg2;
- (_Bool)_hasStoryTab:(id)arg1;
- (void)updateTabBarCornerRadius:(double)arg1;
- (void)updateWithHighlightedIndex:(double)arg1 isTracking:(_Bool)arg2;
- (void)updateWithTabControllers:(id)arg1 highlightedTabController:(id)arg2;
- (id)initWithUserSession:(id)arg1 useV11Theme:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

