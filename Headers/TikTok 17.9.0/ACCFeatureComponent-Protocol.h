//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol UIViewControllerTransitionCoordinator;

@protocol ACCFeatureComponent <NSObject>

@optional
@property(nonatomic, getter=isMounted) _Bool mounted;
- (void)bindViewModel;
- (Class)componentViewModelClass;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)componentReceiveMemoryWarning;
- (void)componentDidUnmount;
- (void)componentWillUnmount;
- (void)componentDidDisappear;
- (void)componentWillDisappear;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (void)componentDidMount;
@end

