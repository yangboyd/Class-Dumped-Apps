//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTAdBasePlayerOverlayView;
@protocol YTResponder;

@interface YTAdBasePlayerOverlayViewController : UIViewController <YTResponder>
{
    YTAdBasePlayerOverlayView *_playerOverlayView;
    int _playerViewLayout;
    double _expansionCoefficient;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didPressWatchCollapse;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (id)playerOverlayView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

