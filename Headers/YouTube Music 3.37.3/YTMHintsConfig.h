//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTHintsConfig-Protocol.h"

@class GIMMe, NSString, YTUserDefaults;

@interface YTMHintsConfig : NSObject <YTHintsConfig>
{
    YTUserDefaults *_userDefaults;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)skipObstructionCheck;
- (id)tooltipContainerViewOverride;
- (double)minimumTooltipDuration;
- (void)didShowTooltipWithModel:(id)arg1;
- (_Bool)canShowTooltipWithModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

