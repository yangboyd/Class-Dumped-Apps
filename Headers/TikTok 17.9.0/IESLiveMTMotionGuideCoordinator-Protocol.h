//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol IESLiveMTMotionGuideCoordinator <NSObject>
- (void)updateVerticalGuideCount;
- (NSDictionary *)guideNewStyleDictionary;
- (_Bool)enableEntranceGuideStyle;
- (_Bool)enableNewGuideStyle;
- (void)showNewVerticalGuide;
- (_Bool)verticalGuideShowing;
- (void)shouldShowNewGuide:(_Bool)arg1;
- (_Bool)hasShownLeftSwipe;
- (void)triggerLeftSwiped;
- (_Bool)needShowLeftPanGuide;
- (void)showSwipeGuideIfNeeds;
- (void)triggerVerticalSwipedWithGuide:(_Bool)arg1;
- (_Bool)hasShownVerticalSwipe;
- (void)triggerVerticalSwiped;
- (_Bool)needShowRoomSwipeGuideWithScene:(unsigned long long)arg1;
@end

