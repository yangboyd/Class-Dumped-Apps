//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCBeautyConfigurationViewModel, NSDictionary;

@interface AWEBeautyViewModel : NSObject
{
    ACCBeautyConfigurationViewModel *_configurationViewModel;
    NSDictionary *_referExtra;
}

@property(retain, nonatomic) NSDictionary *referExtra; // @synthesize referExtra=_referExtra;
@property(retain, nonatomic) ACCBeautyConfigurationViewModel *configurationViewModel; // @synthesize configurationViewModel=_configurationViewModel;
- (void).cxx_destruct;
- (id)initWithConfigurationViewModel:(id)arg1 referExtra:(id)arg2;

@end

