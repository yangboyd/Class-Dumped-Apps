//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBMutableSetting, HUBSetting;

@interface HUBDynamicSetting : NSObject
{
    HUBSetting *_hiddenSetting;
    HUBMutableSetting *_mutableSetting;
}

+ (id)withHiddenSetting:(id)arg1 mutableSetting:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) HUBMutableSetting *mutableSetting; // @synthesize mutableSetting=_mutableSetting;
@property(readonly, nonatomic) HUBSetting *hiddenSetting; // @synthesize hiddenSetting=_hiddenSetting;
- (id)initWithHiddenSetting:(id)arg1 mutableSetting:(id)arg2;

@end

