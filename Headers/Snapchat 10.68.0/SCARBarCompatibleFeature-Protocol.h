//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSUUID, SCARBarItem, UIGestureRecognizer;
@protocol SCFeatureARBar;

@protocol SCARBarCompatibleFeature <NSObject>
@property(readonly, nonatomic) SCARBarItem *arBarItem;
@property(readonly, nonatomic) NSUUID *uuid;
- (void)hideOriginalUIForDisplayInARBar:(id <SCFeatureARBar>)arg1;
- (void)restoreFromARBar:(id <SCFeatureARBar>)arg1;
- (void)deactivateFromARBar:(id <SCFeatureARBar>)arg1;
- (void)cancelPrepareForActivationFromARBar:(id <SCFeatureARBar>)arg1;
- (_Bool)activateFromPoint:(struct CGPoint)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 arBar:(id <SCFeatureARBar>)arg3;
- (void)prepareForActivationFromPoint:(struct CGPoint)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 arBar:(id <SCFeatureARBar>)arg3;
@end

