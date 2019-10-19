//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFIChoiceModel, NSNumber, NSString;

@protocol NFIChoicePointOverlayDelegate <NSObject>
- (void)playNextBranchingEpisode:(NSNumber *)arg1 trackId:(NSNumber *)arg2;
- (void)navigateToSegmentId:(NSString *)arg1;
- (void)navigateToTimeMs:(double)arg1;
- (void)currentSelectedChoice:(NFIChoiceModel *)arg1 userInitiated:(_Bool)arg2;
- (void)didSelectChoice:(NFIChoiceModel *)arg1 atIndex:(long long)arg2;

@optional
- (void)immediatelySelectedChoice:(NFIChoiceModel *)arg1;
- (void)countdownAnimationComplete;
@end

