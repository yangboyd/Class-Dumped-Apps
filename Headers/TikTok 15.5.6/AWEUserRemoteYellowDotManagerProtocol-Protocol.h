//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEUserModel, NSArray;

@protocol AWEUserRemoteYellowDotManagerProtocol <NSObject>
- (_Bool)hasSliderInsightsYellowDot;
- (_Bool)hasProfileMoreYellowDot;
- (_Bool)hasTabMeYellowDot;
- (void)tapYellowDotForType:(unsigned long long)arg1;
- (_Bool)hasYellowDotForType:(unsigned long long)arg1;
- (void)updateYellowPoints:(NSArray *)arg1;
- (id)initWithUserModel:(AWEUserModel *)arg1;
@end

