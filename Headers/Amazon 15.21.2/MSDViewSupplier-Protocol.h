//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIViewController;
@protocol DOKDockableViewDisplayConfig, DOKDockableViewLifecycleDelegate, DOKDockableViewPositionConfig;

@protocol MSDViewSupplier
@property(readonly, nonatomic) id <DOKDockableViewLifecycleDelegate> lifecycleDelegate;
@property(readonly, nonatomic) id <DOKDockableViewPositionConfig> positionConfig;
@property(readonly, nonatomic) id <DOKDockableViewDisplayConfig> displayConfig;
@property(readonly, nonatomic) UIViewController *contentViewController;
@end

