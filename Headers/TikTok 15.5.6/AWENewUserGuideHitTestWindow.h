//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface AWENewUserGuideHitTestWindow : UIWindow
{
    CDUnknownBlockType _hitTestHandler;
}

+ (id)showWithHitTestHandler:(CDUnknownBlockType)arg1;
+ (id)currentWindow;
@property(copy, nonatomic) CDUnknownBlockType hitTestHandler; // @synthesize hitTestHandler=_hitTestHandler;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHidden:(_Bool)arg1;

@end

