//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol _TtP18AnalyticsFramework26AnalyticsScreenViewContext_;

@interface _TtC6Reddit32LiveStreamOverflowViewController : UIViewController
{
    // Error parsing type: , name: constants
    // Error parsing type: , name: tableView
    // Error parsing type: , name: dragBar
    // Error parsing type: , name: delegate
    // Error parsing type: , name: bottomSheet
    // Error parsing type: , name: senderAnalyticsContext
    // Error parsing type: , name: theme
    // Error parsing type: , name: items
    // Error parsing type: , name: modItems
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onDimmerViewTapped;
- (void)didDismissSheet;
- (void)didExpandToFullSheet;
- (void)onExpandToFullSheet;
- (void)willExpandToFullSheet;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didSwipeDragBarDown;
@property(nonatomic, readonly) id <_TtP18AnalyticsFramework26AnalyticsScreenViewContext_> analyticsContext;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

