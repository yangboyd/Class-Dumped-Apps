//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface T1FleetLineView : UIView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: fleetCollection
    // Error parsing type: , name: loadingView
    // Error parsing type: , name: account
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: didAddEmptyThread
    // Error parsing type: , name: timelinePollTimer
    // Error parsing type: , name: threadObserver
    // Error parsing type: , name: errorObserver
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleLongPress:(id)arg1;
- (void)tfx_fleetUseSocialGraphEnabledParameterChanged;
- (void)tfx_fleetsCanaryServiceEnabledParameterChanged;
- (void)tfx_fleetsDevServiceEnabledParameterChanged;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)willPresentFleetsController;
@property(nonatomic, readonly) _Bool shouldScrollOffScreen;
- (void)didPullToRefresh;
- (void)layoutSubviews;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

