//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "YTEditFeatureUI.h"

@class NSArray, NSString, UIImage, UIView;

@protocol YTEditFeatureTab <NSObject, YTEditFeatureUI>
@property(readonly, nonatomic) NSArray *interactionLoggingButtons;
@property(nonatomic) __weak UIView *containerView;
@property(readonly, nonatomic) int veType;
- (NSString *)tabAccessibilityIdentifier;
- (UIView *)view;
- (NSString *)title;
- (UIImage *)imageSelected:(_Bool)arg1;

@optional
- (void)animateDisappearanceWithCompletionBlock:(void (^)(_Bool))arg1;
- (void)animateAppearance;
@end

