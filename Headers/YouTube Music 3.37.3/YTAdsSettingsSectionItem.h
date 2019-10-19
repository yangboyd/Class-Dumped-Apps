//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTAdsSettingsSectionController, YTAdsSettingsSectionItemPolicy;

@interface YTAdsSettingsSectionItem : NSObject
{
    long long _inputType;
    NSString *_title;
    NSString *_inputText;
    YTAdsSettingsSectionItemPolicy *_policy;
    CDUnknownBlockType _selectBlock;
    YTAdsSettingsSectionController *_sectionController;
}

@property(nonatomic) __weak YTAdsSettingsSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) YTAdsSettingsSectionItemPolicy *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long inputType; // @synthesize inputType=_inputType;
- (void).cxx_destruct;

@end

