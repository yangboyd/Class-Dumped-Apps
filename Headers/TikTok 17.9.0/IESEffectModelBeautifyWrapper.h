//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESEffectModel.h"

@class AWEBeautifyEffectSettings;

@interface IESEffectModelBeautifyWrapper : IESEffectModel
{
    _Bool _isNewer;
    IESEffectModel *_effect;
    unsigned long long _gender;
    unsigned long long _beautifyCategory;
    AWEBeautifyEffectSettings *_settings;
    long long _group;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNewer; // @synthesize isNewer=_isNewer;
@property(nonatomic) long long group; // @synthesize group=_group;
@property(retain, nonatomic) AWEBeautifyEffectSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) unsigned long long beautifyCategory; // @synthesize beautifyCategory=_beautifyCategory;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(retain, nonatomic) IESEffectModel *effect; // @synthesize effect=_effect;
- (_Bool)isValid;
- (id)initWithEffect:(id)arg1;

@end

